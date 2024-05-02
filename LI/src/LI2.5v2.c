#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdbool.h>

#define TABLE_SIZE 20

typedef struct
{
    int value;
} valor;

valor *hash_table1[TABLE_SIZE];
valor *hash_table2[TABLE_SIZE];

unsigned int hash_function1(int value, int slots)
{
    return value % slots;
}

unsigned int hash_function2(int *value, int *slots)
{
    return (*value / *slots) % *slots;
}

void init_hash_table() // init table empty (NULL)
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        hash_table1[i] = NULL;
        hash_table2[i] = NULL;
    }
}

/*
int insert_hash_table(valor *v)
{
    if (v == NULL) return 0;
    int index = hash_function1(&v->value);\
    if (hash_table1[index]->value == v->value)
    {
        return 2;
    }
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        int try = (index + i) % TABLE_SIZE;
        if (hash_table1[try] == NULL)
        {
            hash_table1[try] = v;
            return 1;
        }
    }
    return 0;
}

void print_hash_table()
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if (hash_table1[i] != NULL)
        {
            printf("%i\t%i\n", i, hash_table1[i]->value);
        }
    }
}

valor *search_hash_table(int *value)
{
    int index = hash_function1(value);
    if (hash_table1[index] != NULL && hash_table1[index]->value == *value)
    {
        return hash_table1[index];
    }
    else return NULL;
}

void delete_hash_table(int *value)
{
    int index = hash_function1(value);
    if (hash_table1[index] != NULL && hash_table1[index]->value == *value)
    {
        hash_table1[index] = NULL;
    }
}
*/

int existsOpen(int open[], int x, int slots)
{
    for (int i = 0; i < slots; i++)
    {
        if (x == open[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int slots = 0, number = -1, key = 0;
    char instruction = 'A';
    if(scanf("%i", &slots) != 1) return -1;
    int open[slots];
    printf("%i\n", slots);
    while (scanf("%s", &instruction) != EOF)
    {
        printf("%i\n", slots);
        
        if (scanf("%i", &number) != 1) return -1;
        
        printf("%i\n", open[key]);
        
        if (existsOpen(open, number, slots)) printf("%i EXISTS\n", number);
        else
        {
            key = hash_function1(number, slots);
            open[key] = number;
        }
        
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