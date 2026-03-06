#include <stdio.h>

int tamanho(char s[]) 
{
    int i = 0;
    while (s[i] != '\0') 
    {
        i++;
    }
    return i;
}

int compara(char frase[], char palavra[], int pos) 
{
    int i = 0;
    while (palavra[i] != '\0') 
    {
        if (frase[pos + i] != palavra[i])
         {
            return 0;
        }
        i++;
    }
    return 1;
}

int main() 
{
    char frase[10010];
    char palavra[45], substituta[45];

    int i = 0;
    char c;

    while (scanf("%c", &c) != EOF && c != '\n') 
    {
        frase[i] = c;
        i++;
    }
    frase[i] = '\0';

    scanf("%s", palavra);
    scanf("%s", substituta);

    int tamPalavra = tamanho(palavra);
    int tamSubst = tamanho(substituta);

    for (i = 0; frase[i] != '\0'; ) 
    {
        if (compara(frase, palavra, i)) 
        {
            for (int k = 0; k < tamSubst; k++) 
            {
                printf("%c", substituta[k]);
            }
            i += tamPalavra;
        } 
        else 
        {
            printf("%c", frase[i]);
            i++;
        }
    }

    return 0;
}