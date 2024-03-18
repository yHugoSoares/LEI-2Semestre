#include <stdio.h>
#include <stdlib.h>
#include <string.h>
<<<<<<< HEAD
#include <assert.h>
#include <stdbool.h>

#define VALUE_SIZE INT_MAX
#define TABLE_SIZE 10000
#define ACTUAL_TABLE *p

typedef struct
{
    int key;
    int value;
} valor;

valor * hash_table[TABLE_SIZE];

// find a person in the table by their name
valor *hash_tabte_tookup (int value) 
{
    int index = hash1_function(value);
    if (hash_table[index] != NULL && strcmp(hash_table[index]->value, value) == 0)
    {
        return hash_table[index];
    }
    else    
    {
        return NULL;
    }
}

unsigned long hash1_function(int value)
{
    return value % TABLE_SIZE;
}


unsigned long hash2_function(int value)
{
    return ((value/TABLE_SIZE) % TABLE_SIZE);
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
=======
#include <math.h>

#define CAPACITY 50000 // Size of the HashTable.

unsigned long hash_function(char* str)
{
    unsigned long i = 0;

    for (int j = 0; str[j]; j++)
        i += str[j];

    return i % CAPACITY;
}



>>>>>>> 9897e862ba81119aaad2327f6ecf3baf9d077224

int main()
{
    // char type[10], activity;
    int value = 0;
    
    init_hashtables();
    scanf("%i", &value);
    print_table();
    // fgets(type, 10, stdin);
    // scanf("%c", &activity);
    
    // printf("%li\n", hash2_function(value, p));
}