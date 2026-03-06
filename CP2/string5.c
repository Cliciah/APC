#include <stdio.h>

int main() 
{
    char palavra[101];
    int i, contador = 0;

    while (scanf("%s", palavra) != EOF) 
    {
        i = 0;
        while (palavra[i] != '\0') 
        {
            if (palavra[i] == 'o') 
            {
                contador++;
            }
            i++;
        }
    }

    printf("%d\n", contador);

    return 0;
}