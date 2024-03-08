#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <float.h>
#include <ctype.h>
#include <math.h>


// Frequencias de cada letra
float expected[26] = {43.31, 10.56, 23.13, 17.25, 56.88, 9.24, 12.59, 15.31,
                          38.45, 1.00, 5.61, 27.98, 15.36, 33.92, 36.51, 16.14, 1.00,
                          38.64, 29.23, 35.43, 18.51, 5.13, 6.57, 1.48, 9.06, 1.39};
// Conta qual a quantidade de numero de letras
void contaLetras(char *frase, int *freq)
{
    int tam = strlen(frase);
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < tam; i++)
    {
        if (isalpha(frase[i]))
        {
            int index = toupper(frase[i]) - 'A';
            freq[index]++;
        }   
    }
}
// Calcula a parcial com a formula SUM(((Ei-Oi)^2)/2)
float calculaParcial(int *freq)
{
    float resultado = 0.0;
    for (int i = 0; i < 26; i++)
    {
        resultado += pow(expected[i] - freq[i] , 2)/expected[i];
    }
    return resultado;
}
// Da a frase cifrada de acordo com o index, ou com o deslocamento
void cifraCeaser(char *frase, int deslocamento, char *cifrado)
{
    for (long unsigned int i = 0; i < strlen(frase); i++)
    {
        if (isalpha(frase[i]))
        {
            if (frase[i] >= 'A' && frase[i] <= 'Z')
            {
                cifrado[i] = 'A' + (frase[i] - 'A' + deslocamento) % 26;   
            }
            else
            {
                cifrado[i] = 'a' + (frase[i] - 'a' + deslocamento) % 26;
            }
        }
        else
        cifrado[i] = frase[i];
    }    
}
// Funcao main que conjuga tudo junto
int main()
{
    int freq[26] = {0};
    int deslocamento = 1;
    float min = FLT_MAX;
    char frase[10000] = {0}, cifrado[10000] = {0};
    if (fgets (frase, 10000, stdin) == NULL)
    {
        return -1;
    }
    // Retirar o ENTER dado pelo fgets;
    frase[strcspn(frase, "\n")] = '\0';

    for (int i = 0; i < 26; i++)
    {
        cifraCeaser(frase, i, cifrado);
        contaLetras(cifrado, freq);
        float atual = calculaParcial(freq);
        if (atual < min)
        {
            min = atual;
            deslocamento = i;
        }
    }
    cifraCeaser(frase, deslocamento, cifrado);
    printf("%i %s\n", deslocamento, cifrado);
    return 0;
}