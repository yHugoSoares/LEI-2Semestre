#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdbool.h>
#include <math.h>

typedef struct
{
    int value;
    int key;
} valor;

unsigned int hash_function1(int value, int slots)
{
    return value % slots;
}

unsigned int hash_function2(int *value, int *slots)
{
    return (*value / *slots) % *slots;
}


void initTable(int *open[], int slots) // init table empty (NULL)
{
    for (int i = 0; i < slots; i++)
    {
        open[i] = NULL;
    }
}

void initDeleted(int deleted[], int slots)
{
    for (int i = 0; i < slots; i++)
    {
        deleted[i] = 0;
    }
}

int openInsert(int *open[], int deleted[], int slots, int x)
{
    int key = hash_function1(x, slots);
    int start = key;
    int deletedSlotKey = -1;

    if (open[key] == NULL)
    {
        open[key] = malloc(sizeof(int));
        *open[key] = x;
        printf("%d -> %d\nOK\n", key, *open[key]);
        return 0;
    }

    while (open[key] != NULL)
    {
        if (deleted[key] == 1 && deletedSlotKey == -1)
        {
            deletedSlotKey = key;
        }
        if (*open[key] == x && deleted[key] == 0)
        {
            printf("%d EXISTS\n", x);
            if (deletedSlotKey != -1)
            {
                *open[deletedSlotKey] = x;
                deleted[deletedSlotKey] = 0;
                deleted[key] = 1;
            }
            return 0;
        }

        key++;
        if (key == start)
        {
            if (deletedSlotKey != -1) break;
            else
            {
            printf("GIVING UP!\n");
            return 1;
            }
        }
        if (key == slots)
        {
            key = 0;
        }
    }

    if (deletedSlotKey != -1)
    {
        deleted[deletedSlotKey] = 0;
        *open[deletedSlotKey] = x;
        printf("%d -> %d\nOK\n", deletedSlotKey, x);
    }
    else
    {
        open[key] = malloc(sizeof(int));
        *open[key] = x;
        printf("%d -> %d\nOK\n", key, x);
    }

    return 0;
}

void openSearch(int *open[], int deleted[], int slots, int x)
{
    int key = hash_function1(x, slots);
    int start = key;
    int deletedSlotKey = -1;

    while (open[key] != NULL)
    {
        if (deleted[key] == 1 && deletedSlotKey == -1)
            deletedSlotKey = key;

        if (*open[key] == x && deleted[key] == 0)
        {
            if (deletedSlotKey != -1)
            {
                *open[deletedSlotKey] = x;
                deleted[deletedSlotKey] = 0;
                deleted[key] = 1;
                printf("%d\n", deletedSlotKey);
            }
            else
                printf("%d\n", key);
            return;
        }

        key++;
        if (key == slots)
            key = 0;

        if (key == start)
            break;
    }

    printf("NO\n");
}

void openDelete(int * open[], int deleted[], int slots, int key, int x)
{
    int start = key;
    while (open[key] != NULL)
    {
        if (*open[key] == x && deleted[key] == 0)
        {
            deleted[key] = 1;
            printf("OK\n");
            return;
        }
        key++;
        if (key == slots)
            key = 0;
        if (key == start)
        {
            printf("NO\n");
            return;
        }
    }
}

void openPrint(int * open[], int deleted[], int slots)
{
    for(int i = 0; i < slots; i++)
    {
        if (open[i] != NULL && deleted[i] == 0) printf("%d\t%d\n", i, *open[i]);
        else if (open[i] != NULL && deleted[i] == 1) printf("%d\t%c\n", i, 'D');
    }
}

void openFunction(int slots)
{
    int *open[slots];
    int deleted[slots];
    initTable(open, slots);
    initDeleted(deleted, slots);

    char instruction[] = "A";
    int number = -1;

    while(scanf("%s", instruction) != EOF && instruction[0] != 'S')
    {
        int key;
        if (instruction[0] != 'P') assert(scanf("%d", &number) == 1);
            
        key = hash_function1(number, slots);

        if (instruction[0] == 'I')
        {
            if (openInsert(open, deleted, slots, number)) break;
        }
        if (instruction[0] == 'C') 
        {
            openSearch(open, deleted, slots, number);
        }
        if (instruction[0] == 'D')
        {
            if (open[key] == NULL) printf("NO\n");
            else if (*open[key] == number && deleted[key] == 0)
            {
                deleted[key] = 1;
                printf("OK\n");
            }
            else openDelete(open, deleted, slots, key, number);
        }

        if (instruction[0] == 'P') 
        {
            openPrint(open, deleted, slots);
        }
    }
}
/* --------------------------------------------------------------- */

int main()
{
    int slots = 0;
    char type[] = "A";
    
    if(scanf("%d", &slots) != 1) return -1;

    if (scanf("%s", type) != 1) return -1;
    
    // valor *hash_table1[slots];
    // valor *hash_table2[slots];

    if (!strcmp(type, "OPEN"))
    {
        openFunction(slots);
    }
    else if (!strcmp(type, "CUCKOO"))
    {
        
    }
    else if (!strcmp(type, "LINK"))
    {
        
    }
    return 0;
}

/*
void init_hash_table(valor *hash_table1[], valor *hash_table2[], int slots) // init table empty (NULL)
{
    for (int i = 0; i < slots; i++)
    {
        hash_table1[i] = NULL;
        hash_table2[i] = NULL;
    }
}

int insert_hash_table(valor *v, valor *hash_table1[], int slots)
{
    if (v == NULL) return 0;
    int index = hash_function1(v->value, slots);
    if (hash_table1[index]->value == v->value)
    {
        return 2;
    }
    for (int i = 0; i < slots; i++)
    {
        int try = (index + i) % slots;
        if (hash_table1[try] == NULL)
        {
            hash_table1[try] = v;
            return 1;
        }
    }
    return 0;
}

void print_hash_table(valor *hash_table1[], int slots)
{
    for (int i = 0; i < slots; i++)
    {
        if (hash_table1[i] != NULL)
        {
            printf("%i\t%i\n", i, hash_table1[i]->value);
        }
    }
}

valor *search_hash_table(int *value, valor *hash_table1[], int slots)
{
    int index = hash_function1(*value, slots);
    if (hash_table1[index] != NULL && hash_table1[index]->value == *value)
    {
        return hash_table1[index];
    }
    else return NULL;
}

void delete_hash_table(int *value, valor *hash_table1[], int slots)
{
    int index = hash_function1(*value, slots);
    if (hash_table1[index] != NULL && hash_table1[index]->value == *value)
    {
        hash_table1[index] = NULL;
    }
}
*/