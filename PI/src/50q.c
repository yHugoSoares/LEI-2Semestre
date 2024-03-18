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

char *strcatV2 (char s1[], char s2[])
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
    return fgets(sUnited, sizeof(sUnited), stdout);
}

char *strcpyV2 (char *dest, char source[])
{
    for (long unsigned int i = 0; i < strlen(source); i++)
    {
        dest[i] = source[i];
    }
    return dest;
}

int strcmpV2 (char s1[], char s2[])
{
    int sum = 0;
    for (long unsigned int i = 0; i < strlen(s1); i++)
    {
        if (s1[i]  == s2[i])
        {
            sum = 0;
        }
        else if (s1[i] > s2[i])
        {
            sum += s1[i] - s2[i];
        }
        else
        {
            sum += s2[i] - s1[i];
        }
    }
    return sum;
}

char *strstrV2 (char s1[], char s2[])
{
    int counter = 0;
    for (long unsigned int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] == s2[counter])
        {
            counter++;
        }
        else
        {
            counter = 0;
        }
    }
    if (counter == 0)
    {
        return NULL;
    }
    else return s2;
}

void strrev (char s[])
{
    int counter = 0;
    char sReversed[strlen(s)];
    for (long unsigned int i = strlen(s); i > 0; i--)
    {
        sReversed[counter] = s[i];
    }
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

    // char s1[100], s2[100];
    // fgets(s1, 100, stdin);
    // fgets(s2, 100, stdin);
    // printf("String concatenada: %s\n", strcatV2(s1, s2));

    // char source[100], dest[100];
    // fgets(source, 100, stdin);
    // printf("String copiada: %s\n", strcpy(dest, source));

    // char s1[100], s2[100];
    // fgets(s1, 100, stdin);
    // fgets(s2, 100, stdin);
    // printf("Comparacao: %i\n", strcmpV2(s1, s2));

    // char s1[100], s2[100];
    // fgets(s1, 100, stdin);
    // fgets(s2, 100, stdin);
    // printf("String encontrada: %s\n", strstrV2(s1, s2));

    char s[100];
    fgets(s, 100, stdin);
    strrev(s);
    printf("%s", s);

    return 0;
}