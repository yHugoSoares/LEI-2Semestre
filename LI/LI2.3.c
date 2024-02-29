#include <stdio.h>
#include <math.h>
#include <string.h>
#include <assert.h>

int main() 
{
    int N;
    if (scanf("%d", &N) != 1)
    {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }


    for (int i = 0; i < N; i++) 
    {
        int E, M;
        char binary[BUFSIZ] = {0};
        if (scanf("%d %d %s", &E, &M, binary) != 3)
        {
            fprintf(stderr, "Invalid input\n");
            return 1;
        }

        int sign;
        if (binary[0] == '1')
        {
            sign = -1;
        }
        else
        {
            sign = 1;
        }
        
        int exponent = 0;
        for (int j = 1; j <= E; j++) 
        {
            exponent = exponent * 2 + (binary[j] - '0');
        }
        exponent = -exponent;

        double mantissa = 0;
        for (int j = E + 1; j < E + M + 1; j++) 
        {
            mantissa += (binary[j] - '0') * pow(2, j - 1);
        }
        mantissa += 1;

        double number;
        if (exponent == -(1 << (E - 1)) + 1 && mantissa == 1) 
        {
            number = 0;
        } 
        else if (exponent == (1 << (E - 1)) - 1) 
        {
            if (mantissa == 1)
            {
                if (sign == 1)
                {
                    printf("INFINITY\n");
                }
                else
                {
                    printf("-INFINITY\n");
                }
            } 
            else 
            {
                printf("NaN\n");
            }
        } 
        else 
        {
            number = sign * mantissa * pow(2, exponent-1);
        }

        printf("%lg\n", number);
    }

    return 0;
}