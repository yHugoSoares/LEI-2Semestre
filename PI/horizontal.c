#include <stdio.h>

void trianguloh(int dimensao)
{
    int i, j, k;
    for (i = 1; i < dimensao*2; i = i + 2)
    {
        for (k = 0; k < dimensao - i/2; k++)
            {
                printf(" ");
            }
        for (j = 0; j < i; j++)
        {
                       
            printf("#");
        }
        printf("\n");
    }
}

int main()
{
    trianguloh(5);
}