#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insert(int x, int a[], int n) 
{	
    while (n > 0 && a[n-1] > x) 
    {	
        a[n] = a[n-1];	
        n--;	
    }	
    a[n] = x;	
}

void isort(int a[], int n) 
{	
    if (n == 0) return;	
    isort(a,n-1);	
    insert(a[n-1],a,n-1);	
}

// TESTE 31 de Maio de 2022

typedef struct LInt_nodo {
int valor;
struct LInt_nodo *prox;
} *LInt;

typedef struct ABin_nodo {
int valor;
struct ABin_nodo *esq, *dir;
} *ABin;



int nesimo(int a[], int N, int i)
{
    isort(a, N);
    
    return a[i-1];
}

LInt removeMaiores(LInt l, int x)
{
    LInt temp = l;
    if (l == NULL)
    {
        return NULL;
    }
    while (temp != NULL)
    {
        if (temp->valor > x)
        {
            LInt remove = temp;
            free(remove);
            temp = NULL;
            break;
        }
        else
        {
            temp = temp->prox;
        }
    }
    free(temp);
    return l;
}
/*
3. Implemente a função LInt caminho(ABin a, int x) que, dada uma árvore binária de procura a e um valor x, devolve uma lista com todos os valores desde a raiz até x
(inclusivé). Se x não existir na árvore, deve devolver NULL. Considere a definição usual do tipo ABin (o tipo LInt foi dado na questão anterior).
*/
LInt caminho(ABin a, int x)
{
    LInt result;
    while (a != NULL)
    {
        if(a == NULL)
        {
            return NULL;
        }
        else if (a->valor == x)
        {
            result->valor = x;
            free(a);
            return result;
        }
        else if (a->valor > x)
        {
            a = a->esq;
            result->valor = a->valor;
            result = result->prox;
        }
        else if (a->valor < x)
        {
            a = a->dir;
            result->valor = a->valor;
            result = result->prox;
        }
    }
    free(a);
    return result;
}

void inc(char s[])
{
    // printf("Start:\n");
    int value = 0;
    char aux[strlen(s)];
    for (int i = 0; s[i] != '\0'; i++)
    {
        value = (value * 10) + (s[i] - '0');
        // printf("%d\n", value);
    }
    value += 1;
    printf("%d\n", value);
    for (int i = strlen(s); i > 0; i--)
    {
        aux[i] = '0' + (value%10);
        printf("%d \t %c \t %d\n", i, aux[i], value%10);  
        value /= 10;
    }
    strcpy(s, aux);
}

int sacos(int p[], int N, int C)
{
    int result = 0;
    int soma = 0;
    for (int i = 0; i < N; i++)
    {
        soma += p[i];
    }
    result = soma / C;
    if (soma%C > 0)
    {
        result++;
    }
    return result;
}

int pesquisa(int a[], int N, int x)
{
    for (int i = 0; i < N; i++)
    {
        if (a[i] == x)
        {
            return i;
        }
    }
    
    return -1;
}

void roda(LInt *l)
{
    int temp = 0;
    LInt aux = *l;
    LInt res = NULL;
    while (aux->prox != NULL)
    {
        aux = aux->prox;
    }
    temp = aux->valor;
    free(aux);
    res->valor = temp;
    res->prox = *l;
}

int apaga (ABin a, int n)
{
    if (a == NULL) 
    {
        return 0; // Empty tree, no nodes deleted
    }

    if (n <= 0) 
    {
        return 0; // Nothing to delete
    }

    // Recursively delete nodes from the left and right subtrees
    int deleted_left = apaga((a->esq), n);
    int deleted_right = apaga((a->dir), n - deleted_left);

    // Update the total number of nodes deleted
    int total_deleted = deleted_left + deleted_right + 1;

    // If we still need to delete more nodes, delete the current node
    if (total_deleted <= n) 
    {
        free(a);
        a = NULL;
    }

    return total_deleted;
}

int main()
{
    // int a[] = {1, 4, 7, 8, 10, 3, 50, 34, 21, 19};
    // printf("%d\n", nesimo(a, 10, 3));

    // char s[] = "233";
    // inc(s);
    // printf("%s\n", s);

    // int prods[] = {3,6,2,1,5,7,2,4,1};
    // printf("%d sacos!\n", sacos(prods, 9, 10));
}