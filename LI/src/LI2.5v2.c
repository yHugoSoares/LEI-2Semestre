#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdbool.h>

#define TABLE_SIZE 50

typedef struct
{
    int value;
} valor;

valor *hash_table1[TABLE_SIZE];
valor *hash_table2[TABLE_SIZE];

unsigned int hash_function1(int *value)
{
    return *value % TABLE_SIZE;
}

unsigned int hash_function2(int *value)
{
    return (*value/TABLE_SIZE) % TABLE_SIZE;
}

void init_hash_table() // init table empty (NULL)
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        hash_table1[i] = NULL;
        hash_table2[i] = NULL;
    }
}

int insert_hash_table(valor *v)
{
    if (v == NULL) return 0;
    int index = hash_function1(&v->value);
    if (hash_table1[index] != NULL)
    {
        return 0;
    }
    hash_table1[index] = v;
    return 1;
}

void print_hash_table()
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if (hash_table1[i] == NULL)
        {
            printf("\t%i\t---\n", i);
        }
        else printf("\t%i\t%i\n", i, hash_table1[i]->value);
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

valor *delete_hash_table(int *value)
{
    int index = hash_function1(value);
    if (hash_table1[index] != NULL && hash_table1[index]->value == *value)
    {
        valor *tmp = hash_table1[index];
        hash_table1[index] = NULL;
        return tmp;
    }
    else return NULL;
}

int main()
{

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

    valor *tmp = search_hash_table(&f.value);
    if (tmp == NULL) printf("Value not found\n");
    else printf("Value found: %i\n", tmp->value);
    
    delete_hash_table(&(tmp->value));

    if (tmp == NULL) printf("Value not found\n");
    else printf("Value found: %i\n", tmp->value);

    

    // print_hash_table();
}