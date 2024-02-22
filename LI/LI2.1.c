/*
signos.c
*/
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() 
{
    int dia, mes;

    /* Mudar para UTF8 */
    setlocale(LC_CTYPE, "C.UTF-8");


    if (scanf("%d %d", &dia, &mes) == 2)
    {
        if ((mes == 3 && dia >= 21 && dia <= 31) || (mes == 4 && dia >= 1 && dia <= 20)) 
        {
            wchar_t c = 0x2648;
            wprintf(L"%lc\n", c);
        }
        if ((mes == 4 && dia >= 21 && dia <= 30) || (mes == 5 && dia >= 1 && dia <= 20)) 
        {
            wchar_t c = 0x2649;
            wprintf(L"%lc\n", c);
        }
        if ((mes == 5 && dia >= 21 && dia <= 31) || (mes == 6 && dia >= 1 && dia <= 20)) 
        {
            wchar_t c = 0x264a;
            wprintf(L"%lc\n", c);
        }
        if ((mes == 6 && dia >= 21 && dia <= 30) || (mes == 7 && dia >= 1 && dia <= 22)) 
        {
            wchar_t c = 0x264b;
            wprintf(L"%lc\n", c);
        }
        if ((mes == 7 && dia >= 23 && dia <= 31) || (mes == 8 && dia >= 1 && dia <= 22)) 
        {
            wchar_t c = 0x264c;
            wprintf(L"%lc\n", c);
        }
        if ((mes == 8 && dia >= 23 && dia <= 31) || (mes == 9 && dia >= 1 && dia <= 22)) 
        {
            wchar_t c = 0x264d;
            wprintf(L"%lc\n", c);
        }
        if ((mes == 9 && dia >= 23 && dia <= 30) || (mes == 10 && dia >= 1 && dia <= 22))
        {
            wchar_t c = 0x264e;
            wprintf(L"%lc\n", c);
        }
        if ((mes == 10 && dia >= 23 && dia <= 31) || (mes == 11 && dia >= 1 && dia <= 21)) 
        {
            wchar_t c = 0x264f;
            wprintf(L"%lc\n", c);
        }
        if ((mes == 11 && dia >= 22 && dia <= 30) || (mes == 12 && dia >= 1 && dia <= 21)) 
        {
            wchar_t c = 0x2650;
            wprintf(L"%lc\n", c);
        }
        if ((mes == 12 && dia >= 22 && dia <= 31) || (mes == 1 && dia >= 1 && dia <= 19)) 
        {
            wchar_t c = 0x2651;
            wprintf(L"%lc\n", c);
        }
        if ((mes == 1 && dia >= 20 && dia <= 31) || (mes == 2 && dia >= 1 && dia <= 18)) 
        {
            wchar_t c = 0x2652;
            wprintf(L"%lc\n", c);
        }
        if ((mes == 2 && dia >= 19 && dia <= 29) || (mes == 3 && dia >= 1 && dia <= 20)) 
        {
            wchar_t c = 0x2653;
            wprintf(L"%lc\n", c);
        }
    }
    return 0;
}