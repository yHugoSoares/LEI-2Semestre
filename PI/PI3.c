#include <stdio.h>

void swapM(int *x, int *y)
{
    int *aux = x;
    x = y; y = aux;
    printf("%ls %ls\n", x, y);
}

// void ex1a()
// {
//     int x[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
//     int *y, *z, i;
//     y = x;
//     z = x + 3;
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d %d %d\n", x[i], *y, *z);
//         y = y+1; z = z+2;
//     }    
// }

int main()
{
    int *x,*y;
    scanf("%ls %ls", x, y);
    swapM(&x, &y);

    return 0;
}