#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct aluno 
{
int numero;
char nome[100];
int miniT [6];
float teste;
} Aluno;

float nota(Aluno a) 
{
    int minitestes = 0, resultado = 0;
    
    if (a.teste < 8.0) resultado = 0;
    else 
    {
        for (int i = 0; i < 6; i++) 
        {
            minitestes += a.miniT[i];
        }
        if (minitestes < 3) resultado = 0;
        else resultado = a.teste * 0.8 + minitestes * 0.12;
    }
    
    return resultado;
}


int procuraNum (int num, Aluno t[], int N)
{
    int l = 0, u = N-1, m;
    while (l <= u) 
    {
        m = (l+u) / 2;
        if (t[m].numero == num) return 1;
        if (t[m].numero < num) l = m+1;
        else u = m-1;
    }
    return 0;
}

void ordenaPorNum(Aluno t[], int N)
{
    Aluno temp;
    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            if(t[i].numero > t[j].numero)
            {
                temp = t[i];
                t[i] = t[j];
                t[j] = temp;
            }
        }
    }
}

int main()
{
    Aluno aluno1[4] =   {{4444, "André", {2,1,0,2,2,2}, 10.5}
                        ,{2222, "Joana", {2,2,2,1,0,0}, 14.5}
                        ,{7777, "Maria", {2,2,2,2,2,1}, 18.5}
                        ,{3333, "Paulo", {0,0,2,2,2,1}, 8.7}
                        };
    int numAlunos = sizeof(aluno1) / sizeof(aluno1[0]);
    for(int i = 0; i < numAlunos; i++)
    {
        printf("aluno: %s nota: %f\n",aluno1[i].nome,nota(aluno1[i]));
    }
    return 1;
}