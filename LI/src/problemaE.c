#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <wchar.h>
#include <assert.h>

int hash(int table, int number, int tableSize)
{
    if (table == 0)
        return number % tableSize;
    else
    {
        int n = floor(number / tableSize);
        return n % tableSize;
    }
}

void initTable(int * table[], int tableSize)
{
    for(int i = 0; i < tableSize; i++)
        table[i] = NULL;
}

void initDeleted(int deleted[], int tableSize)
{
    for(int i = 0; i < tableSize; i++)
        deleted[i] = 0;
}

int openInsertion(int * table[], int deleted[], int tableSize, int number)
{
    int key = hash(0, number, tableSize);
    int start = key;
    int deletedSlotKey = -1;

    if (table[key] == NULL)
    {
        table[key] = malloc(sizeof(int));
        *table[key] = number;
        printf("%d -> %d\nOK\n", key, *table[key]);
        return 0;
    }

    while (table[key] != NULL)
    {
        if (deleted[key] == 1 && deletedSlotKey == -1)
            deletedSlotKey = key;
        
        if (*table[key] == number && deleted[key] == 0)
        {
            printf("%d EXISTS\n", number);
            if (deletedSlotKey != -1)
            {
                *table[deletedSlotKey] = number;
                deleted[deletedSlotKey] = 0;
                deleted[key] = 1;
            }
            return 0;
        }

        key++;
        if (key == tableSize)
            key = 0;

        if (key == start)
        {
            if (deletedSlotKey != -1)
                break;
            else
            {
            printf("GIVING UP!\n");
            return 1;
            }
        }
    }

    if (deletedSlotKey != -1)
    {
        *table[deletedSlotKey] = number;
        deleted[deletedSlotKey] = 0;
        printf("%d -> %d\nOK\n", deletedSlotKey, number);
    }
    else
    {
        table[key] = malloc(sizeof(int));
        *table[key] = number;
        printf("%d -> %d\nOK\n", key, number);
    }

    return 0;
}

void openSearch(int * table[], int deleted[], int tableSize, int number)
{
    int key = hash(0, number, tableSize);
    int start = key;
    int deletedSlotKey = -1;

    while (table[key] != NULL)
    {
        if (deleted[key] == 1 && deletedSlotKey == -1)
            deletedSlotKey = key;

        if (*table[key] == number && deleted[key] == 0)
        {
            if (deletedSlotKey != -1)
            {
                *table[deletedSlotKey] = number;
                deleted[deletedSlotKey] = 0;
                deleted[key] = 1;
                printf("%d\n", deletedSlotKey);
            }
            else
                printf("%d\n", key);
            return;
        }

        key++;
        if (key == tableSize)
            key = 0;

        if (key == start)
            break;
    }

    printf("NO\n");
}

void openDelete(int * table[], int deleted[], int tableSize, int key, int number)
{
    int start = key;
    while (table[key] != NULL)
    {
        if (*table[key] == number && deleted[key] == 0)
        {
            deleted[key] = 1;
            printf("OK\n");
            return;
        }
        key++;
        if (key == tableSize)
            key = 0;
        if (key == start)
        {
            printf("NO\n");
            return;
        }
    }
}

void openPrint(int * table[], int deleted[], int tableSize)
{
    for(int i = 0; i < tableSize; i++)
    {
        if (table[i] != NULL && deleted[i] == 0)
        printf("%d\t%d\n", i, *table[i]);
        else if (table[i] != NULL && deleted[i] == 1)
        printf("%d\t%c\n", i, 'D');
    }
}

void open(int tableSize)
{
    int * table[tableSize];
    int deleted[tableSize];
    initTable(table, tableSize);
    initDeleted(deleted, tableSize);

    char instruction[] = "A";
    int number = -1;

    while(scanf("%s", instruction) != EOF && instruction[0] != 'S')
    {
        int key;
        if (instruction[0] != 'P')
            assert(scanf("%d", &number) == 1);
            
        key = hash(0, number, tableSize);

        if (instruction[0] == 'I')
            if (openInsertion(table, deleted, tableSize, number))
                break;

        if (instruction[0] == 'C')
            openSearch(table, deleted, tableSize, number);

        if (instruction[0] == 'D')
        {
            if (table[key] == NULL)
                printf("NO\n");
            else if (*table[key] == number && deleted[key] == 0)
            {
                deleted[key] = 1;
                printf("OK\n");
            }
            else
                openDelete(table, deleted, tableSize, key, number);
        }

        if (instruction[0] == 'P')
            openPrint(table, deleted, tableSize);
    }
}

// // // // // // // // // // // // // //

typedef struct linkedLists
{
    int key;
    int nCount;
    int numbers[2000];
    struct linkedLists * prox;
} *linkL;

linkL linkInsert(linkL l, int tableSize, int number)
{
    int key = hash(0, number, tableSize);

    int keyExists = 0;
    int numberExists = 0;

    // Caso a lista ligada ainda não exista
    if (l == NULL)
    {
        l = malloc(sizeof(struct linkedLists));
        l->key = key;
        l->nCount = 1;
        l->numbers[0] = number;
        l->prox = NULL;
        printf("%d -> %d\nOK\n", key, number);
        return l;
    }

    linkL temp = l;

    // Determina se existe já na lista a chave e o número pretendidos
    while (temp != NULL && temp->key != key)
        temp = temp->prox;

    if (temp != NULL)
    {
        keyExists = 1;
        for (int i = 0; i < temp->nCount; i++)
            if ((temp->numbers)[i] == number)
                numberExists = 1;
    }

    // Caso ambos existam print EXISTS
    if (keyExists && numberExists)
        printf("%d EXISTS\n", number);
    
    // Caso exista a chave mas não exista o número
    else if (keyExists && !numberExists)
    {
        int numbers[temp->nCount+1];
        numbers[0] = number;

        for (int i = 0; i < temp->nCount; i++)
            numbers[i+1] = temp->numbers[i];
        for (int i = 0; i < temp->nCount+1; i++)
            temp->numbers[i] = numbers[i];
        
        temp->nCount++;

        printf("%d -> %d\nOK\n", key, number);
    }

    else
    {
        linkL r = malloc(sizeof(struct linkedLists));

        r->key = key;
        r->nCount = 1;
        r->numbers[0] = number;
        r->prox = NULL;
        linkL temp = l;
        linkL ant = NULL;
        while(temp != NULL && temp->key < key)
        {
            ant = l;
            temp = temp->prox;
        }
        if (ant == NULL)
        {
            r->prox = l;
            l = r;
        }
        else
        {
            ant->prox = r;
            r->prox = temp;
        }
        printf("%d -> %d\nOK\n", key, number);
    }

    return l;

}

void linkSearch(linkL l, int tableSize, int number)
{
int key = hash(0, number, tableSize);

    int numberExists = 0;

    if (l == NULL)
        printf("NO\n");

    linkL temp = l;

    while (temp != NULL && temp->key != key)
        temp = temp->prox;

    if (temp != NULL)
    {
        for (int i = 0; i < temp->nCount; i++)
            if ((temp->numbers)[i] == number)
                numberExists = 1;
    }

    if(numberExists)
        printf("%d\n", key);
    else
        printf("NO\n");
}

linkL linkDelete(linkL l, int tableSize, int number)
{
    int key = hash(0, number, tableSize);

    int numberExists = 0;

    if (l == NULL)
        printf("NO\n");

    linkL temp = l;
    linkL ant = NULL;

    while (temp != NULL && temp->key != key)
    {
        ant = temp;
        temp = temp->prox;
    }

    if (temp != NULL)
    {
        for (int i = 0; i < temp->nCount; i++)
            if ((temp->numbers)[i] == number)
                numberExists = 1;
    }

    if (!numberExists)
        printf("NO\n");
    else
    {
        int newNumbers[temp->nCount];
        int j = 0;

        for (int i = 0; i < temp->nCount; i++)
        {
            if (temp->numbers[i] != number)
            {
                newNumbers[j] = temp->numbers[i];
                j++;
            }
        }

        temp->nCount--;

        for (int i = 0; i < temp->nCount; i++)
            temp->numbers[i] = newNumbers[i];

        printf("OK\n");
    }
    
    if (temp->nCount == 0)
    {
        if (ant == NULL)
            return temp->prox;
        else
            ant->prox = temp->prox;
    }



    return l;
}

void linkPrint(linkL l)
{
    linkL temp = l;
    while(temp != NULL)
    {
        printf("%d", temp->key);
        for(int i = 0; i < temp->nCount; i++)
            printf(" %d",temp->numbers[i]);
        printf("\n");
        temp = temp->prox;
    }
}

void link(int tableSize)
{
    linkL l = NULL;

    char instruction[] = "A";
    int number = -1;

    while(scanf("%s", instruction) != EOF && instruction[0] != 'S')
    {
        if (instruction[0] != 'P')
            assert(scanf("%d", &number) == 1);

        if (instruction[0] == 'I')
            l = linkInsert(l, tableSize, number);

        if (instruction[0] == 'C')
        {
            linkSearch(l, tableSize, number);
        }

        if (instruction[0] == 'D')
        {
            l = linkDelete(l, tableSize, number);
        }

        if (instruction[0] == 'P')
        {
            linkPrint(l);
        }
    }
}


void cuckooInsertion(int tableSize, int * tables[][tableSize], int currentTable, int number, int tries)
{
    int key = hash(currentTable, number, tableSize);
    int kickedNumber = -1;
    
    if (tries > tableSize)
    {
        printf("GIVING UP!\n");
        return;
    }
    else if (tables[currentTable][key] == NULL)
    {
        tables[currentTable][key] = malloc(sizeof(int));
        *tables[currentTable][key] = number;
        printf("%d %d -> %d\nOK\n", currentTable, key, *tables[currentTable][key]);
    }
    else
    {
        kickedNumber = *tables[currentTable][key];
        *tables[currentTable][key] = number;
        printf("%d %d -> %d\n", currentTable, key, *tables[currentTable][key]);

        tries++;

        currentTable = !currentTable;

        cuckooInsertion(tableSize, tables, currentTable, kickedNumber, tries);
    }
}

void cuckooPrint(int tableSize, int * tables[][tableSize])
{
    for(int i = 0; i < tableSize; i++)
    {
        if (tables[0][i] != NULL)
        printf("%d\t%d\t%d\n", 0, i, *tables[0][i]);
    }
    for(int i = 0; i < tableSize; i++)
    {
        if (tables[1][i] != NULL)
        printf("%d\t%d\t%d\n", 1, i, *tables[1][i]);
    }
}

void cuckoo(int tableSize)
{
    int * tables[2][tableSize];
    initTable(tables[0], tableSize);
    initTable(tables[1], tableSize);

    char instruction[] = "A";
    int number = -1;

    while(scanf("%s", instruction) != EOF && instruction[0] != 'S')
    {
        int key;
        if (instruction[0] != 'P')
        {
            assert(scanf("%d", &number) == 1);
        }    
        key = hash(0, number, tableSize);

        if (instruction[0] == 'I')
        {
            if (tables[0][key] != NULL && *tables[0][key] == number)
            {
                printf("%d EXISTS\n", *tables[0][key]);
            }
            else
            {
                cuckooInsertion(tableSize, tables, 0, number, 0);
            }
        }

        if (instruction[0] == 'P')
        {
            cuckooPrint(tableSize, tables);
        }
    }
}


int main()
{    
    int tableSize;
    assert(scanf("%d", &tableSize) == 1);

    char protocol[7];
    assert(scanf("%s", protocol) != 0);

    if (!strcmp(protocol, "OPEN"))
    {
        open(tableSize);
    }
    if (!strcmp(protocol, "LINK"))
    {
        link(tableSize);
    }
    if (!strcmp(protocol, "CUCKOO"))
    {
        cuckoo(tableSize);
    }
    return 0;
}