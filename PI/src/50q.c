#include <stdio.h>
#include <string.h>
#include <math.h>

void q1() 
{
    int n = 0, resultado = 0;
    printf("Insira numeros inteiros (0 para terminar)\n");
    while (scanf("%d", &n) && n != 0)
    {
        if (n > resultado) 
        {
            resultado = n;
        }
    }
    printf("Maior: %d\n", resultado);
}


void q2() 
{
    int n = 0, counter = 0;
    float soma = 0, media = 0;
    printf("Insira numeros para media (0 para terminar)\n");
    while(scanf("%i", &n) && n != 0)
    {
        soma += n;
        counter++;
    }
    media = soma / counter;
    printf("Media: %.2f\n", media);
}

void q3()
{
    int n = 0, counter = 0, v[100], max = 0, max2 = 0;
    printf("Insira numeros inteiros (0 para terminar)\n");
    while(scanf("%i", &n) && n != 0)
    {
        v[counter++] = n;
    }
    for (int i = 0; i < counter; i++)
    {
        if (max < v[i])
        {
            max = v[i];
        }
    }
    for (int i = 0; i < counter; i++)
    {
        if (max2 < v[i] && v[i] != max)
        {
            max2 = v[i];
        }
    }
    printf("2º maior: %i\n", max2);
}

int bitsUm (unsigned int n)
{
    int counter = 0;
    while (n != 0)
    {
        if (n % 2 == 1)
        {
            counter++;
            n = n / 2;
        }
        n = n / 2;
    }
    return counter;
}

int main()
{
    int n = 0;
    scanf("%i", &n);
    printf("Numero de bits 1: %i\n", bitsUm(n));

    return 0;
}