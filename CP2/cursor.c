#include <stdio.h>

int main() 
{
    int L;
    scanf("%d", &L); 

    char texto[1000][1001];
    int i = 0;

    for (i = 0; i < L; i++) 
    {
        scanf(" %[^\n]", texto[i]); 
    }

    int linha, coluna;
    scanf("%d %d", &linha, &coluna);

    int linhaAtual = linha;
    int colunaDesejada = coluna;

    char comando[10]; 

    while (scanf("%s", comando) != EOF) 
    {
        if (comando[0] == 'j') 
        {
            if (linhaAtual < L) 
            {
                linhaAtual++;
            }
        } else if (comando[0] == 'k') 
        {
            if (linhaAtual > 1) 
            {
                linhaAtual--;
            }
        }

        int tam = 0;
        while (texto[linhaAtual - 1][tam] != '\0') 
        {
            tam++;
        }

        int colunaFinal;
        if (colunaDesejada <= tam) 
        {
            colunaFinal = colunaDesejada;
        } else {
            colunaFinal = tam;
        }

        char caractere = texto[linhaAtual - 1][colunaFinal - 1];

        printf("%d %d %c\n", linhaAtual, colunaFinal, caractere);
    }

    return 0;
}