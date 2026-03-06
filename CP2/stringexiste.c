#include <stdio.h>

int comparar(char a[], char b[]) 
{
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') 
    {
        if (a[i] != b[i]) 
        {
            return 0; 
        }
        i++;
    }

    if (a[i] == '\0' && b[i] == '\0') 
    {
        return 1; 
    } 
    else 
    {
        return 0;
    }
}

int main() 
{
    int N, M;
    scanf("%d %d", &N, &M);

    char S[1000][81]; 
    char P[1000][81];

    int i, j;

    for (i = 0; i < N; i++) 
    {
        scanf("%s", S[i]);
    }

    for (i = 0; i < M; i++) 
    {
        scanf("%s", P[i]);
    }

    int achou = 0;
    for (i = 0; i < M && !achou; i++) 
    {
        for (j = 0; j < N && !achou; j++) 
        {
            if (comparar(P[i], S[j])) 
            {
                achou = 1;
            }
        }
    }

    printf("%d\n", achou);

    return 0;
}