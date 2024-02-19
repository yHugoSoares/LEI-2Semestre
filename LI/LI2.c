#include <stdio.h>

void converter_para_yijing(long num) 
{
    // Yijing
    char *yijing[64] = 
    {
        "䷀", "䷁", "䷂", "䷃", "䷄", "䷅", "䷆", "䷇", "䷈", "䷉", "䷊", "䷋", "䷌", "䷍", "䷎", "䷏",
        "䷐", "䷑", "䷒", "䷓", "䷔", "䷕", "䷖", "䷗", "䷘", "䷙", "䷚", "䷛", "䷜", "䷝", "䷞", "䷟",
        "䷠", "䷡", "䷢", "䷣", "䷤", "䷥", "䷦", "䷧", "䷨", "䷩", "䷪", "䷫", "䷬", "䷭", "䷮", "䷯",
        "䷰", "䷱", "䷲", "䷳", "䷴", "䷵", "䷶", "䷷", "䷸", "䷹", "䷺", "䷻", "䷼", "䷽", "䷾", "䷿"
    };

    char resultado[64];
    int i = 0;

    // Converte o número para base 64
    while (num > 0) 
    {
        resultado[i++] = *yijing[num % 64];
        num /= 64;
    }

    // Imprime os caracteres correspondentes ao número convertido
    for (int j = i - 1; j >= 0; j--) 
    {
        printf("%s ", &resultado[j]);
    }
}

int main() 
{
    long num;
    //printf("Digite um número: ");
    scanf("%ld", &num);

    printf("O número %ld convertido para o sistema Yijing é: \n", num);
    converter_para_yijing(num);

    return 0;
}