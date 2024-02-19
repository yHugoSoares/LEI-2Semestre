#include <stdio.h>

void converter_para_yijing(unsigned long long int num) 
{
    char yijing[64] =   "䷀	䷁ 	䷂ 	䷃ 	䷄ 	䷅ 	䷆ 	䷇ 	䷈ 	䷉ 	䷊ 	䷋ 	䷌ 	䷍ 	䷎ 	䷏"
                        "䷐ ䷑ 	䷒ 	䷓ 	䷔ 	䷕ 	䷖ 	䷗ 	䷘ 	䷙ 	䷚ 	䷛ 	䷜ 	䷝ 	䷞ 	䷟"
                        "䷠ ䷡ 	䷢ 	䷣ 	䷤ 	䷥ 	䷦ 	䷧ 	䷨ 	䷩ 	䷪ 	䷫ 	䷬ 	䷭ 	䷮ 	䷯"
                        "䷰ ䷱ 	䷲ 	䷳ 	䷴ 	䷵ 	䷶ 	䷷ 	䷸ 	䷹ 	䷺ 	䷻ 	䷼ 	䷽ 	䷾ 	䷿";
    char resultado[64];
    int i = 0;

    while (num > 0) 
    {
        resultado[i++] = yijing[num % 64];
        num /= 64;
    }

    for (int j = i - 1; j >= 0; j--) 
    {
        printf("%c ", resultado[j]);
    }
}

int main() 
{
    unsigned long long int num;
    printf("Digite um número: ");
    scanf("%llu", &num);

    printf("O número %llu convertido para o sistema Yijing é: \n", num);
    converter_para_yijing(num);

    return 0;
}