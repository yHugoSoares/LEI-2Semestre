#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdbool.h>

int p;

#define VALUE_SIZE INT_MAX

typedef struct
{
    int value;
} valor;



valor *hash_table1[p];
valor *hash_table2[p];

void search(int val)  
{  
    int key = val % p;  
    if(hash_table1[key] -> value == val)
        printf("Search Found\n");  
    else  
        printf("Search Not Found\n");  
}  

unsigned long hash1_function(int value)
{
    return value % p;
}


unsigned long hash2_function(int value)
{
    return ((value/p) % p);
}

void init_hashtables()
{
    for (int i = 0; i < p; i++)
    {
        hash_table1[i] = NULL;
        hash_table2[i] = NULL;
    }
    // Initialize hashTable to NULL
}

void print_table()
{
    for (int i = 0; i < p; i++)
    {
        if (hash_table1[i] == NULL)
        {
            printf("\t%i\t---\n", i);
        }
        else printf("%i\n", hash_table1[i]->value);
    }
}

int hash_table_insert(valor *p)
{
    if (p == NULL) 
    {
        return 0;
    }
    int index = hash1_function(p -> value);
    if (hash_table1[index] != NULL)
    {
        return 0;
    }
    hash_table1[index] = p;
    return 1;
}

int main()
{
    // char type[10], activity;
    int value = 0;
    if (scanf("%i", &p) != 1) return -1;
    ez(p);
    init_hashtables();
    if(scanf("%i", &value) != 1) return -1;
    print_table();
    // fgets(type, 10, stdin);
    // scanf("%c", &activity);
    
    // printf("%li\n", hash2_function(value, p));
}