#include <stdio.h>
#include <math.h>

void multiplicacao(float m, int n) 
{
    float r = 0;
    scanf("%f %i",&m, &n);
    for (int i = n; i > 0; i--)
    {
        r += m;
    }
    printf("O resultado da multiplicação %.2f*%i = %.2f\n", m, n, r);
}

void multotimizada(int  p, int o)
{
    scanf("%i %i", &o, &p);
    int t = 0;
    
    while (p > 1)
    {
        if (p%2 != 0)
        {
            t = t + o;
            o = o * 2;
            p = p / 2;
        }
        else
        {
            o = o * 2;
            p = p / 2;
        }
    }
    if (p == 1)
    {
        t = t + o;
    }
    printf("O resultado da multiplicação é: %i\n" , t); 
}

int mdc(int a, int b)
{
    printf("Escolha dois numeros:\n");
    scanf("%i %i", &a, &b);
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    if (a == b)
    {
        printf("O mdc é: %i\n", a);
    }
}

int main()
{
    int m, n, o, p, a, b;
    mdc(a, b);
    //multiplicacao(m, n);
    //multotimizada(o, p);
}