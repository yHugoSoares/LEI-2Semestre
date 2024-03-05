#include <stdio.h>
#include <string.h>
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
        if ((frase[i] > 66 && frase[i] < 91) || (frase[i] > 96 && frase[i] < 123))
        {
            if ((frase[i] + diferenca > 90) && (frase[i] < 96))
            {
                palavra[i] = frase[i] + diferenca - 26;
            }
            else if (frase[i] + diferenca > 122)
            {
                palavra[i] = frase[i] + diferenca - 26;
            }
            
            else
            palavra[i] = frase[i] + diferenca;
        }
        else
        {
            palavra[i] = frase[i];
        }
    }

    printf("%d %s\n", diferenca, palavra);
}