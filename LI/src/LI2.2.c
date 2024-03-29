#include <stdio.h>
#include <wchar.h>
#include <locale.h>

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
    int a[100];
    int count = 0;

    // Calcula os valores em base 64 e armazena no array a[]
    while (j >= 64) 
    {
        i = j % 64;
        j = j / 64;
        a[count++] = i;
    }
    i = j % 64;
    a[count] = i;

    // Imprime os valores armazenados no array a[]
    while (count > 0) 
    {
        int t = a[count];
        printf("%s ", yijing[t]);
        count--;
    }
    int t = a[count];
    printf("%s\n", yijing[t]);
}

int main() 
{
    unsigned long long int x;
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