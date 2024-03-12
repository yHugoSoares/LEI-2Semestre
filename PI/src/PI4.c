#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contaVogais (char *s)
{   
    int count = 0;
    for (long unsigned int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count += 1;
        }
    }
    return count;
}

int retiraVogaisRep (char *s)
{
    int j = 0, count = 0;
    for (long unsigned int i = 0; s[i] != '\0'; i++)
    {
        if ((s[i+1] != s[i]) && (s[i] != 'a' || s[i] != 'e' || s[i] != 'i' || s[i] != 'o' || s[i] != 'u'))
        {
            s[j++] = s[i];
        }   
        else count += 1;
    }
    s[j] = '\0';
    return count;
}

int main()
{
    char s[100];
    fgets(s, 100, stdin);
    printf("%d\n", contaVogais(s));

    
    printf("%d %s\n", retiraVogaisRep(s), s);
}