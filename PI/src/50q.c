#include <stdio.h>
#include <string.h>
#include <math.h>

int q1(int *v, int size)
{
    int resultado = v[0];
    for (int i = 1; i < size; i++)
    {
        if (v[i] > resultado)
        {
            resultado = v[i];
        }
    }
    return resultado;
}

float q2(int *v, int size)
{
    float soma, media = 0;
    for (int i = 0; i < size; i++)
    {
        soma += v[i];
    }
    media = soma / size;
    return media;
}

int main()
{
    int count1 = 0, maior[100], num;
    while (scanf("%i", &num) && num != 0)
    {
        maior[count1++] = num;
    }
    printf("%i\n", q1(maior, count1));
    
    int count2 = 0, media[100], no;
    while (scanf("%i", &no) && no != 0)
    {
        media[count2++] = no;
    }
    printf("%f\n", q2(media, count2));
    
    return 0;
}