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
        char binary[BUFSIZ];

        assert(fgets(binary, BUFSIZ, stdin) != NULL);
        assert(binary[strlen(binary) - 1] == '\n');
        binary[strlen(binary) - 1] = 0;
        printf("%s\n", binary);
        int E, M;
        char bits[BUFSIZ] = {0};

        sscanf(binary, "%d %d %s", &E, &M, bits);

        printf("%d\t%d\t%s\n", E, M, bits);
        char Sinal;
        char Exp[BUFSIZ] = {0};
        char Mant[BUFSIZ] = {0};

        char formato[BUFSIZ];

        sprintf(formato, "%%c%%%ds%%%ds", E, M);
        printf("%s\n", formato);
        sscanf(bits, formato, &Sinal, Exp, Mant);

        printf("%d %s %s\n", Sinal - '0', Exp, Mant);

        return 0;
    }
}