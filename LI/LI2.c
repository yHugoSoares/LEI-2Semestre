#include <stdio.h>

void yijing(unsigned long long int x)
{
    const char *unicodeChars[] = 
    {
        "\u4dc0", "\u4dc1", "\u4dc2", "\u4dc3", "\u4dc4", "\u4dc5", "\u4dc6", "\u4dc7",
        "\u4dc8", "\u4dc9", "\u4dca", "\u4dcb", "\u4dcc", "\u4dcd", "\u4dce", "\u4dcf",
        "\u4dd0", "\u4dd1", "\u4dd2", "\u4dd3", "\u4dd4", "\u4dd5", "\u4dd6", "\u4dd7",
        "\u4dd8", "\u4dd9", "\u4dda", "\u4ddb", "\u4ddc", "\u4ddd", "\u4dde", "\u4ddf",
        "\u4de0", "\u4de1", "\u4de2", "\u4de3", "\u4de4", "\u4de5", "\u4de6", "\u4de7",
        "\u4de8", "\u4de9", "\u4dea", "\u4deb", "\u4dec", "\u4ded", "\u4dee", "\u4def",
        "\u4df0", "\u4df1", "\u4df2", "\u4df3", "\u4df4", "\u4df5", "\u4df6", "\u4df7",
        "\u4df8", "\u4df9", "\u4dfa", "\u4dfb", "\u4dfc", "\u4dfd", "\u4dfe", "\u4dff"
    };
    unsigned long long int i, j = x;
    int a[100];
    int count = 0;
    while (j >= 64)
    {
        i = j%64;
        j = j/64;
        a[count] = i;
        count++;
    }
    i = j%64;
    a[count] = i;
    while (count > 0)
    {
        int t = a[count];
        printf ("%s ", unicodeChars[t]);
        count--;
    }
    int t = a[count];
    printf ("%s", unicodeChars[t]);
    printf ("\n");
}



int main () 
{
    unsigned long long int x;
    if (scanf("%llu", &x) != 1) 
    {
        fprintf(stderr, "Erro ao ler o dia.\n");
        return 1;
    }
    yijing (x);
    return 0;
}