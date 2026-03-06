#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    char mensagem[1001];
    int i, j;

    for (i = 0; i < n; i++) 
    {
        scanf(" %[^\n]", mensagem); 

        j = 0;
        while (mensagem[j] != '\0') 
        {
            char c = mensagem[j];

            if (c >= 'A' && c <= 'Z') 
            {
                if (c <= 'M') 
                {
                    printf("%c", c + 13);
                } 
                else 
                {
                    printf("%c", c - 13);
                }
            }

            else if (c >= 'a' && c <= 'z') 
            {
                if (c <= 'm') {
                    printf("%c", c + 13);
                } 
                else 
                {
                    printf("%c", c - 13);
                }
            }
            else 
            {
                printf("%c", c);
            }

            j++;
        }

        printf("\n"); 
    }

    return 0;
}