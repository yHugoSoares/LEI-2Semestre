#include <stdio.h>
#include <string.h>
#include <math.h>


void q1()
{
    int v[100], n = 0, count = 0;
    int resultado = v[0];
    printf("Insira numeros inteiros (0 para terminar)\n");
    while (1)
    {
        assert(scanf("%d", &n) == 1);
        if (n == 0)
        {
            break;
        }
        else count += 1;
        for (int i = 0; i < count; i++)
        {
            if (resultado < v[i])
            {
                resultado = v[i];
            }
        }
    }
    printf("Maior: %d\n", resultado);
}

void q2() 
{
    double soma = 0;
    int num, n = 0;
    while(1) 
    {
        assert(scanf("%d",&num) == 1);
        if(num == 0) break;
        soma += num;
        n++;
    }
    double media = soma / n;
    printf("Média: %.5f\n", media);
}