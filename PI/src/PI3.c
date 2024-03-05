#include <stdio.h>

/*
void ex1a()
{
    int *x, *y, *z, i;
    y = x;
    z = x + 3;
    for (i = 0; i < 5; i++)
    {
        printf("%d %d %d\n", x[i], *y, *z);
        y = y+1; z = z+2;
    }    
}

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
    *m = 0;
    for (int i = 0; i < N; i++)
    {
        if (v[i] > *m)
        {
            *m = v[i];
        }
    }
}

void quadrados(int q[], int N)
{
    for (int i = 0; i < N; i++)
    {
        q[i] = i*i;
    }
}
*/

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
    return n * fact(n - 1);
    }
}

void pascal(int v[], int N)
{
    v[0] = 1;

    for (int i = 1; i <= N; i++)
    {
        v[i] = fact(N) / (fact(i) * fact(N - i));
    }
}

int main()
{
    //int v[15] = {7, 3, 4, 6, 10, 12, 11, 2, 1, 5, 7, 8, 11, 9, 20};
    /*
    int x,y;
    scanf("%i %i", &x, &y);
    swapM(&x, &y);
    printf("x:%d\ny:%d\n", x, y);


    int i,j;
    scanf("%i %i", &i, &j);
    swap(v, i, j);
    printf("%i, %i\n", v[i], v[j]);
    

    int N, t;
    scanf("%i", &N);
    t = soma(v, N);
    printf("Soma total dá: %i\n", t);
    

    inverteArray(v, 15);

    
    int N, m = 0;
    scanf("%i", &N);
    maximum(v, N, &m);
    printf("O maior nº é: %d\n", m);
    

    int N = 0;
    scanf("%i", &N);
    int q[N];
    quadrados(q, N);
    for (int i = 0; i < N; i++)
    {
        printf("q[%i]: %i\n", i, q[i]);
    }   
    */

    int N = 0;
    scanf("%i", &N);
    for (int j = 0; j < N; j++)
    {
        int x[j];
        pascal(x, j);
        printf("--------------------\n");
        for (int i = 0; i <= j; i++)
        {   
            printf("%iº: %i\n", i+1, x[i]);
        }
    }
    return 0;
}