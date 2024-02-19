#include <stdio.h>
#include <locale.h>

// Função para imprimir o símbolo do Yijing correspondente ao valor dado
void imprimir_simbolo(int valor) {
    char simbolos[] = "䷀䷁䷂䷃䷄䷅䷆䷇䷈䷉䷊䷋䷌䷍䷎䷏䷐䷑䷒䷓䷔䷕䷖䷗䷘䷙䷚䷛䷜䷝䷞䷟䷠䷡䷢䷣䷤䷥䷦䷧䷨䷩䷪䷫䷬䷭䷮䷯䷰䷱䷲䷳䷴䷵䷶䷷䷸䷹";
    printf("%c ", simbolos[valor]);
}

// Função para converter um número decimal para base 64 e imprimir os símbolos correspondentes
void converter_para_base64(unsigned long long int numero) {
    int base64[64];
    int indice = 0;

    // Convertendo para base 64
    while (numero > 0) {
        base64[indice++] = numero % 64;
        numero /= 64;
    }

    // Imprimindo os símbolos correspondentes
    for (int i = indice - 1; i >= 0; i--) {
        imprimir_simbolo(base64[i]);
    }
}

int main() 
{
    // Mudar para UTF8
    setlocale(LC_CTYPE, "C.UTF-8");
    
    unsigned long long int numero;
    printf("Digite um número: ");
    scanf("%llu", &numero);

    printf("Número em base 64: ");
    converter_para_base64(numero);

    return 0;
}