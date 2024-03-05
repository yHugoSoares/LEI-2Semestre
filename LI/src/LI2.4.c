#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>




int main()
{
    int diferenca = 5;
    char frase[10000];
    char palavra[10000];
    fgets(frase, 10000, stdin);
    for (int i = 0; i < 10000; i++)
    {
        if (frase[i] == ' ')
        {
            palavra[i] = ' ';
        }
        else
        {
            palavra[i] = frase[i] + diferenca;
        }
        
    }
    
    printf("%d %s\n", diferenca,  palavra);
}