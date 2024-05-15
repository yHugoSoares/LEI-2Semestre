#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef struct lligada 
{
    int valor;
    struct lligada *prox;
} *LInt;

int length (LInt l)
{
    int counter = 0;
    while(l != NULL)
    {
        counter++;
        l = l->prox;
    }   
    return counter;
}

void freeL (LInt l)
{
    LInt temp;
    while(l != NULL)
    {
        temp = l;
        l = l->prox;
        free(temp);
    }
}

void imprimeL (LInt l)
{
    while(l != NULL)
    {
        printf("%d\n", l->valor);
        l = l->prox;
    }
}

LInt reverseL (LInt lista) 
{
    LInt prox = lista->prox;
    lista->prox = NULL;
    while (prox)    
    {
        LInt aux = prox->prox;
        prox->prox = lista;
        lista = prox;
        prox = aux;
    }

  return lista;
}

void insertOrd (LInt *l, int x)
{
    LInt new = malloc(sizeof(struct lligada));
    new->prox = NULL;
    new->valor = x;
    while(*l != NULL && (*l)->valor < x)
    {
        l = &(*l)->prox;
    }
    new->prox = *l;
    l = &new;
}

int removeOneOrd (LInt *l, int x)
{
    LInt temp;
    temp = malloc(sizeof(struct lligada));
    temp = *l;
    while (temp != NULL && temp->valor < x)
    {
        temp = temp->prox;
    }
    if (temp->valor == x) 
    {
        *l = temp->prox;
        free(temp);
        return 0;
    }
    return 1;
}

void merge (LInt *r, LInt a, LInt b)
{
    while (a != NULL || b != NULL)
    {
        if (a->valor < b->valor)
        {
            *r = a;
            a = a->prox;
        }
        else
        {
            *r = b;
            b = b->prox;
        }
        r = &(*r)->prox;
    }
    *r = NULL;
}

void splitQS (LInt l, int x, LInt *mx, LInt *Mx)
{
    while (l != NULL)
    {
        if (l->valor < x)
        {
            *mx = l;
            mx = &(*mx)->prox;
        }
        else
        {
            *Mx = l;
            Mx = &(*Mx)->prox;
        }
    }
    *mx = NULL;
    *Mx = NULL;
}

LInt parteAmeio(LInt *l)
{
    LInt y = *l;
    LInt prev = NULL;
    int len = length(*l)/2;
    for (int i = 0; i < len; i++)
    {
        prev = *l;
        *l = (*l)->prox;
    }
    prev->prox = NULL;
    return y;
}

int removeAll (LInt *l, int x)
{
    int counter = 0;
    for (int i = 0; l != NULL; i++)
    {
        if ((*l)->valor == x)
        {
            *l = (*l)->prox;
            counter++;
        }
    }
    return counter;
}


int removeDups (LInt *l)
{

}


int main()
{
    LInt l = NULL;
    parteAmeio(&l);
}