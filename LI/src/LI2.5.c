#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define VALUE_SIZE INT_MAX
#define TABLE_SIZE 10000
#define ACTUAL_TABLE *p

typedef struct
{
    int value;
} valor;

valor * hash_table[TABLE_SIZE];

unsigned long hash1_function(int value, int ACTUAL_TABLE)
{
    return value % ACTUAL_TABLE;
}


unsigned long hash2_function(int value, int ACTUAL_TABLE)
{
    return ((value/TABLE_SIZE) % ACTUAL_TABLE);
}

void init_hashtables()
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        hash_table[i] = NULL;
    }
    // Initialize hashTable to NULL
}

void print_table()
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if (hash_table[i] == NULL)
        {
            printf("\t%i\t---\n", i);
        }
        else printf("%i\n", hash_table[i]->value);
    }
}

bool hash_table_insert(valor *p)
{
    if (p == NULL) 
    {
        return false;
    }
    int index = hash1_function(p -> value);
    if (hash_table[index] != NULL)
    {
        return false;
    }
    hash_table[index] = p;
    return true;
}

int main()
{
    char type[10], activity;
    int value = 0;
    
    init_hashtables();
    scanf("%i", &p);
    scanf("%i", &value);
    print_table();
    // fgets(type, 10, stdin);
    // scanf("%c", &activity);
    
    // printf("%li\n", hash2_function(value, p));
}