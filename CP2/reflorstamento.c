#include <stdio.h>

int main()
{
    int N;
    int i, j;
    scanf("%d", &N);
    int matriz[N][N];

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    int melhorCaminho = 0;
    int maiorSomaColuna = 0;
    int somaColunas[N];

    for(i = 0; i < N; i++)
    {
        somaColunas[i] = 0;
        for(j = 0; j < N; j++)
        {
            somaColunas[i] += matriz[j][i];
        }
    }

    for(i = 0; i < N; i++)
    {
        if(somaColunas[i] > maiorSomaColuna)
        {
            maiorSomaColuna = somaColunas[i];
            melhorCaminho = i + 1;
        }
    }

    if(melhorCaminho == 0)
    {
        printf("0");
    }
    else{
        printf("%d", melhorCaminho);
    }

    return 0;
}