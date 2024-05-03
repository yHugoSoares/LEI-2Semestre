#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdbool.h>


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

void init_open_table(int *open[], int slots) // init table empty (NULL)
{
    for (int i = 0; i < slots; i++)
    {
        open[i] = NULL;
    }
}


int existsOpen(int *open[], int x, int slots)
{
    for (int i = 0; i < slots; i++)
    {
        if (x == *open[i])
        {
            return 1;
        }
    }
    return 0;
}

void openFunction(int slots)
{
    char instruction[] = "A";
    int number = -1, key = -1, *open[slots];
    init_open_table(open, slots);
    while (scanf("%s", instruction) != EOF || instruction[0] != 'S')
    {
        printf("SLOTS: %d\n", slots);
        if (instruction[0] == 'P')
        {
            for (int i = 0; i < slots; i++)
            {
                if (open[i] != NULL)
                {
                    printf("%d\t%d\n", i, *open[i]);
                }
                
            }
            
        }
        else if (instruction[0] == 'I')
        {
            printf("SLOTS: %d\n", slots);
            assert(scanf("%d", &number) == 1);
            printf("SLOTS: %d\n", slots);    
            if (existsOpen(open, number, slots)) printf("%i EXISTS\n", number);
            else
            {
                key = hash_function1(number, slots);
                *open[key] = number;
                printf("%d -> %d\nOK\n", key, number);
            }
        }
    }
}

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
int main()
{
    char instr;
    int value = 0, size_table = 0;
    if (scanf("%i", &size_table) != 1) return -1;
    if (scanf("%c", &instr) != 1) return -1;
    while (getchar() != '\n')
    {
        if (scanf("%c", &instr) != 1) return -1;
        if (scanf("%i", &value) != 1) return -1;
        if (instr == 'I')
        {
            if (insert_hash_table(&value)) printf(" -> %i\n", value);
            else if (insert_hash_table(&value) == 2) printf("%i EXISTS", value);
            else printf("%i ERROR", value);
        }

        if (instr == 'D')
        {
            delete_hash_table(&value);
        }

        if (instr == 'C')
        {
            
        }

        if (instr == 'P')
        {
            print_hash_table();
        }
    }
    
    
    init_hash_table();
    valor a = {.value = 5};
    valor b = {.value = 142};
    valor c = {.value = 231};
    valor d = {.value = 476};
    valor e = {.value = 495};
    valor f = {.value = 347};
    
    insert_hash_table(&a);
    insert_hash_table(&b);
    insert_hash_table(&c);
    insert_hash_table(&d);
    insert_hash_table(&e);
    insert_hash_table(&f);


    print_hash_table();

    

    print_hash_table();
}
*/