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

void multotimizada(float  p, int o)
{
    float t = 0;
    int k = p;
    scanf("%f %i",&p, &o);
    for (int i = o; i >= 1; i = i / 2)
    {
        if (i == 1)
        {
            t = t + k;
        }
        if (i%2 != 0)
        {
            k = k*2;
            t += k;
        }
        else
        {
            k = k*2;
        }
    }
    printf("O resultado da multiplicação %.2f*%i = %.2f\n", p, o, t);
}

void main()
{
    int m, n, o, p;
    multiplicacao(m, n);
    multotimizada(o, p);
}
