#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct LInt_nodo {
int valor;
struct LInt_nodo *prox;
} *LInt;

typedef struct ABin_nodo {
int valor;
struct ABin_nodo *esq, *dir;
} *ABin;


// Teste, 31 de Maio de 2022
void swap(int v[], int i, int j)
{
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void ssort(int a[], int n) 
{
    int i, j, m;
    for (i = 0; i < n; i++) 
    {
        m = i;
        for (j = i; j < n; j++)
            if (a[j] < a[m]) m = j;
        swap(a, i, m);
    }
}

int nesimo(int a[], int N, int i)
{
    ssort(a, N);
    return a[i-1];
}

LInt removeMaiores(LInt l, int x)
{
    LInt temp = l;

    if (l == NULL || l->valor > x)
    {
        free(temp);
        return NULL;
    }
    while (temp != NULL)
    {
        if (temp->valor > x)
        {
            temp = NULL;
        }
        else temp = temp->prox;
    }
    free(temp);
    return l;
}

int main()
{
    int a[] = {4, 3, 8, 10, 30, 21, 65, 83, 21, 2};

    printf("%d\n", nesimo(a, 10, 3)); // 4
}