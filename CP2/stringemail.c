#include <stdio.h>

int main() 
{
    char nome[101];
    scanf(" %[^\n]", nome);


    for (int i = 0; nome[i] != ' ' && nome[i] != '\0'; i++) 
    {
        if (nome[i] >= 'A' && nome[i] <= 'Z')
            nome[i] = nome[i] + 32;

        printf("%c", nome[i]);
    }

    printf(".");

    int fim = 0;
    while (nome[fim] != '\0') fim++;
    fim--;

    while (fim >= 0 && (nome[fim] == ' ' || nome[fim] == '\n')) fim--;

    while (fim >= 0 && nome[fim] != ' ') fim--;
    fim++;

    while (nome[fim] != '\0' && nome[fim] != ' ' && nome[fim] != '\n') 
    {
        if (nome[fim] >= 'A' && nome[fim] <= 'Z')
            nome[fim] = nome[fim] + 32;

        printf("%c", nome[fim]);
        fim++;
    }

    printf("@unb.br\n");

    return 0;
}