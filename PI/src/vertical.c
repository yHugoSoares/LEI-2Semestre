#include <stdio.h>

void triangulov(int dimensao) 
{
    int i, j;
    for (i = 1; i <= dimensao; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("#");
        }
        printf("\n");
    }
    for (i = dimensao-1; i > 0 ; i--)
    {
        for (j = 1; j <= i; j++) 
        {
            printf("#");
        }
        printf("\n");
    }
}
int main()
{
    triangulov(4);
}