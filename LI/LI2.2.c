#include <stdio.h>

void yijing(unsigned long long int x) 
{
    const char *yijing[] =
    {
        "䷀", "䷁", "䷂", "䷃", "䷄", "䷅", "䷆", "䷇", "䷈", "䷉", "䷊", "䷋", "䷌", "䷍", "䷎", "䷏",
        "䷐", "䷑", "䷒", "䷓", "䷔", "䷕", "䷖", "䷗", "䷘", "䷙", "䷚", "䷛", "䷜", "䷝", "䷞", "䷟",
        "䷠", "䷡", "䷢", "䷣", "䷤", "䷥", "䷦", "䷧", "䷨", "䷩", "䷪", "䷫", "䷬", "䷭", "䷮", "䷯",
        "䷰", "䷱", "䷲", "䷳", "䷴", "䷵", "䷶", "䷷", "䷸", "䷹", "䷺", "䷻", "䷼", "䷽", "䷾", "䷿"
    };
    unsigned long long int i, j = x;
    int count = 0;
    int a[100];

    // Calcula os valores em base 64 e armazena no array a[]
    while (j >= 64) 
    {
        i = j % 64;
        j = j / 64;
        a[count] = i;
        count++;
    }
    i = j % 64;
    a[count] = i;

    // Imprime os valores armazenados no array a[]
    while (count > 0) 
    {
        int t = a[count];
        printf("%s", yijing[count]);
        count--;
    }
    int t = a[count];
    printf("%s\n", yijing[count]);
}

int main() 
{
    unsigned long long int x;
    printf("Digite um número: ");
    if (scanf("%llu", &x) == 1)
    {
        yijing(x);
    }
    else
    {
        printf("Erro de entrada!\n");
    }
    
    return 0;
}