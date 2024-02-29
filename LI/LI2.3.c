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

        int sign = binary[0] == '1' ? -1 : 1;

        int exponent = 0;
        for (int j = 1; j <= E; j++) 
        {
            exponent += pow(2, E - j - 2)  * (binary[j] - '0');
        }
        exponent -= ((1 << E)- 1);

        double mantissa = 1.0;
        for (int j = E + 1; j < E + M + 1; j++) 
        {
            mantissa += (binary[j] - '0') * pow(2, j - E - 2);
        }

        double number;
        if (exponent == ((1 << E) - 1) && mantissa == 1.0) 
        {
            if (sign < 0)
                printf("-0\n");
            else
                printf("0\n");
        }
        else if (exponent == (1 << E) - 1)
        {
            if (mantissa == 1.0)
            {
                printf("NaN\n");
            }
            else
            {
                number = sign == 1 ? INFINITY : -INFINITY;
                printf("%lg\n", number);
            }
        }
        else
        {
            number = sign * mantissa * pow(2, exponent);
            printf("%lg\n", number);
        }
    }
}