#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>

void PhraseToUpper(char *frase)
{
    for (int i = 0; frase[i]; i++)
    {
        frase[i] = toupper(frase[i]);
    }
}

// FORMULA -- SUM((Original - Obtida)^2 / Original)
int Partial(char *frase)
{
    int delta = 5;
    char fraseUpper[10000];
    float expected[26] = {43.31, 10.56, 23.13, 17.25, 56.88, 9.24, 12.59, 15.31,
                          38.45, 1.00, 5.61, 27.98, 15.36, 33.92, 36.51, 16.14, 1.00,
                          38.64, 29.23, 35.43, 18.51, 5.13, 6.57, 1.48, 9.06, 1.39};
    strcpy(fraseUpper, frase);
    PhraseToUpper(fraseUpper);
    float valueO = 0, valueG = 0, sum = __FLT_MAX__;
    
    for (int j = 0; j <= 26; j++)
        {
            for (long long unsigned int i = 0; i < sizeof(fraseUpper); i++)
            {
                int index = fraseUpper[i];
                valueO = expected[index - 65];
                int index = fraseUpper[i] + j;
                valueG = expected[index - 65];
                sum += (pow(valueO - valueG), 2) / valueO;
            }   
        }
        
    
    return delta;
}

int main()
{
    char frase[10000];
    char palavra[10000];
    fgets(frase, 10000, stdin);
    int delta = Partial(frase);
    for (int i = 0; i < 10000; i++)
    {
        if ((frase[i] >= 'A' && frase[i] <= 'Z') || (frase[i] >= 'a' && frase[i] <= 'z'))
        {
            if ((frase[i] + delta > 'Z' && frase[i] <= 'Z') || (frase[i] + delta > 'z'))
            {
                palavra[i] = frase[i] + delta - 26;
            }
            else
            {
                palavra[i] = frase[i] + delta;
            }
        }
        else
        {
            palavra[i] = frase[i];
        }
    }
    printf("%d %s\n", delta, palavra);
    return 0;
}