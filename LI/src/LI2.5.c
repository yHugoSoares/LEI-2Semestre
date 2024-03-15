#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define TABLE_SIZE 2024


unsigned long hash1_function(char* str)
{
    unsigned long i = 0;

    for (int j = 0; str[j]; j++)
        i += str[j];

    return i % TABLE_SIZE;
}

int main()
{
    char str[100], type[10];
    scanf("%i", TABLE_SIZE);
    fgets(type, 10, stdin);
}
