#include <stdio.h>

void swapM(int *x, int *y)
{
    int aux = *x;
    *x = *y; *y = aux;
}

void swap(int v[], int i, int j)
{
    int aux = v[j];
    v[j] = v[i];
    v[i] = aux;
}

int soma(int v[], int N)
{
    int t = 0;
    for (int i = 0; i < N; i++)
    {
        t += v[i];
    }
    return t;
}

void inverteArray(int v[], int N)
{
    printf("{");
    for (int i = N-1; i > 0; i--)
    {
        printf("%i, ", v[i]);
    } 
    printf("%i}\n", v[0]);
}

int maximum(int v[], int N, int *m)
{

}

// void ex1a()
// {
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
    int v[15] = {7, 3, 4, 6, 10, 12, 11, 2, 1, 5, 7, 8, 11, 9, 20};
    /*
    int x,y;
    scanf("%i %i", &x, &y);
    swapM(&x, &y);
    printf("x:%d\ny:%d\n", x, y);
    */
    
    /*
    int i,j;
    scanf("%i %i", &i, &j);
    swap(v, i, j);
    printf("%i, %i\n", v[i], v[j]);
    */

    /*
    int N, t;
    scanf("%i", &N);
    t = soma(v, N);
    printf("Soma total dá: %i\n", t);
    */

    //inverteArray(v, 15);

    int N, *m = 0;
    

    return 0;
}