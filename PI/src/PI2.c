#include <stdio.h>
#include <math.h>

int multiplicacao(float m, int n) 
{
    float r = 0;
    scanf("%f %i",&m, &n);
    for (int i = n; i > 0; i--)
    {
        r += m;
    }
    printf("O resultado da multiplicação %.2f*%i = %.2f\n", m, n, r);
}

int multotimizada(int  p, int o)
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

int mdc2(int a, int b)
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

int mdc3(int c, int d)
{
    printf("Escolha dois numeros:\n");
    scanf("%i %i", &c, &d);
    while (c != d)
    {
        if (c > d)
        {
            c = c % d;
        }
        else
        {
            d = d % c;
        }
    }
    if (c == d)
    {
        printf("O mdc é: %i\n", c);
    }
}
int fib1 (int e)
{
    if (e < 2)
    {
        return e;
    }
    else
    {
        return fib1(e - 1) + fib1(e - 2);
    }
}

int fib2(int n) 
{
    int fib_atual = 0;
    int fib_anterior = 1;
    int fib_anterior_anterior = 0;

    if (n < 2) 
    {
        return n;
    }

    for (int i = 2; i <= n; i++) 
    {
        fib_atual = fib_anterior + fib_anterior_anterior;
        fib_anterior_anterior = fib_anterior;
        fib_anterior = fib_atual;
    }

    return fib_atual;
}

int main()
{
    // Defenicao Variaveis
    int m, n, o, p, a, b, c, d, e, f;
    
    // scanf("%i", &e);
    // fib1(e);
    // printf("Finobacci desse número é: %i\n", fib1(e));

    scanf("%i", &f);
    fib2(f);
    printf("Finobacci desse número é: %i\n", fib2(f));

    //mdc2(a, b);

    //mdc3(c, d);
    
    //multiplicacao(m, n);
    
    //multotimizada(o, p);
}