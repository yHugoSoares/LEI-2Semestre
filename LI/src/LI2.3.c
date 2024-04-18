#include <stdio.h>
#include <math.h>
#include <string.h>
#include <assert.h>

float binaryToFloat(int exponentBits, int mantissaBits, char *binary)
{
    int sign = binary[0] - '0';
    // Get exp value in decimal from binary
    int indice = 0, exponent = 0, bias = 0;
    float result = 0.0;
    /*  
    f = mantissa em base 10
    bias = 2^(k-1) - 1
    e = expoent em base 10
    k = n.o. de bits do expoente (E)
    */
    for (int i = exponentBits; i > 0; i--)
    { 
        exponent += (binary[i] - '0') * pow(2, indice++);
    }
    float mantissa = 0.0;
    for (int i = exponentBits + 1; i < exponentBits + mantissaBits + 1; i++)
    {
        mantissa +=  pow(2, -( i - exponentBits)) * (binary[i] - '0');
    }
    bias = pow(2, exponentBits - 1) - 1;
    if (0 == exponent)
    {
        result = pow(-1, sign) * pow(2, 1 - bias) * mantissa;
    }
    else
    {
        result = pow(-1, sign) * pow(2, exponent - bias) * (mantissa + 1);
    }

    return result;
}

// Check if the binary number has exponent = 0000 or 1111 and mantissa = 0000
int checkBinaryDigits(char *binary, int startingPos, int numDigits)
{
    int firstBit = binary[startingPos] - '0';
    for (int i = startingPos; i < startingPos + numDigits; i++)
    {
        if ((binary[i] - '0') != firstBit)
        {
            return 2;
        }
    }

    return firstBit;
}


int main()
{
    int N = 0;
    int E, M;
    float result;
    char binary[BUFSIZ] = {0};
    if (scanf("%d", &N) != 1)
    {
        printf("Invalid input\n");
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            if (scanf("%d %d %s", &E, &M, binary) != 3)
            {
                printf("Invalid input\n");
            }
            else
            {
                if(checkBinaryDigits(binary, 1, E) == 1 && checkBinaryDigits(binary, E+1, M) == 0)
                {
                    printf("%cInfinity\n", binary[0] == '1' ? '-' : '+');
                }
                else if (checkBinaryDigits(binary, 1, E) == 1 && checkBinaryDigits(binary, E+1, M) != 0)
                {
                    printf("NaN\n");
                }
                else
                {
                    result = binaryToFloat(E, M, binary);
                    printf("%lg\n", result); 
                }
            }
        }
    }
    return 0;
}