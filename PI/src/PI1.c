// PI1.c
#include <stdio.h>

void desenhar_quadrado(int dimensao)
{
    int i, j;
    for(i = dimensao; i > 0; i--)
    {
        for(j = dimensao; j > 0 ; j--)
        {
            printf("#");
        }
        printf("\n");
    }
}

void desenhar_chess(int dimensao)
{
    int i, j, m1, m2;
    for (i = dimensao; i > 0; i--)
    {
        for (j = dimensao; j > 0; j--)
        {
            m1 = i%2;
            m2 = j%2;
            if (m1 == m2)
            {
                printf("#");
            }
            else
            {
                printf("_");
            }
        }
        printf("\n");
    }   
}

void circulo(int r)
{
    int i, j, k;
    for (i = 0; i < r+1; i++) {
        for (k = 0; k < r - i; k++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++) {
            printf("#");
        }
        printf("\n");
    }
    for (i = r - 1; i >= 0; i--) {
        for (k = 0; k < r - i; k++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++) {
            printf("#");
        }
        printf("\n");
    }
}

int main()
{
    int r;

    scanf("%d", &r);
    circulo(r);
    desenhar_quadrado(5);
    desenhar_chess(5);
    return 0;
}