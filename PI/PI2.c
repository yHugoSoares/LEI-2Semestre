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
    scanf("%d %d", &o, &p);
    int t = 0;
    
    if (p != 1)
    {
        while (p > 1)
        {
            if (p%2 != 0)
            {
                o = o * 2;
                p = p / 2;
            }
            else
            {
                t = t + o;
                o = o * 2;
                p = p / 2;
            }
        }
    }
    else
    {
        t = t + o;
    }
    
    printf("O resultado da multiplicação é: %i\n" , t);
}

int main()
{
    int m, n, o, p;
    multiplicacao(m, n);
    multotimizada(o, p);
}