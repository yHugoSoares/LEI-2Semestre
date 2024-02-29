#include <stdio.h>
#include <string.h>
#include <assert.h>
// este programa só lê uma linha e parte a string de bits em sinal, expoente e mantissa
int main() {
    char buf[BUFSIZ];

    assert(fgets(buf, BUFSIZ, stdin) != NULL);
    assert(buf[strlen(buf) - 1] == '\n');
    buf[strlen(buf) - 1] = 0;
    printf("%s\n", buf);
    int E, M;
    char bits[BUFSIZ] = {0};

    sscanf(buf, "%d %d %s", &E, &M, bits);

    printf("%d\t%d\t%s\n", E, M, bits);
    char Sinal;
    char Exp[BUFSIZ] = {0};
    char Mant[BUFSIZ] = {0};

    char formato[BUFSIZ];
    
    /*

    %% c %% %d s %% %d s

    */

    sprintf(formato, "%%c%%%ds%%%ds", E, M);
    printf("%s\n", formato);
    sscanf(bits, formato, &Sinal, Exp, Mant);

    printf("%d %s %s\n", Sinal - '0', Exp, Mant);

    return 0;
}