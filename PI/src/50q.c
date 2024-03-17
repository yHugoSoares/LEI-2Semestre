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
        }
        n = n / 2;
    }
    return counter;
}

int trailingZ (unsigned int n)
{
    int counter = 0;
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            counter++;
        }
        n = n / 2;
    }
    return counter;
}

int qDig (unsigned int n)
{
    int counter = 0;
    while (n > 9)
    {
        counter++;
        n /= 10;
    }
    
    return counter + 1;
}

char *strcat (char s1[], char s2[])
{
    char sUnited[strlen(s1) + strlen(s2)];
    for (long unsigned int i = 0; i < strlen(s1); i++)
    {
        sUnited[i] = s1[i];
    }
    for (long unsigned int i = strlen(s1); i < strlen(s1) + strlen(s2); i++)
    {
        sUnited[i] = s2[i];
    }
    return sUnited;
}


int main()
{
    // int n1 = 0;
    // scanf("%i", &n1);
    // printf("Numero de bits 1: %i\n", bitsUm(n1));

    // int n2 = 0;
    // scanf("%i", &n2);
    // printf("Numero de bits 0: %i\n", trailingZ(n2));

    // int n3 = 0;
    // scanf("%i", &n3);
    // printf("Numero de digitos: %i\n", qDig(n3));

    char s1[100], s2[100];
    fgets(s1, 100, stdin);
    fgets(s2, 100, stdin);
    printf("String concatenada: %s\n", strcat(s1, s2));


    return 0;
}