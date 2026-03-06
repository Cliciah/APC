#include <stdio.h>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    //getchar();
    int matriz[N][M];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            matriz[i][j] = 0;
        }
    }

    char fileira;
    int lugar;

    // 'A' das fileiras é a primeira posição da matriz
    // O número 1 é o início das colunas
    while(scanf(" %c%d", &fileira, &lugar) != EOF){
        //getchar();
        matriz[fileira - 'A'][lugar - 1] = 1;
    }

    printf("  ");
    for(int j = 0; j < M; j++){
        printf("%02d ", j + 1);
    }

    printf("\n");
    for(int i = N - 1; i >= 0; i--){
        printf("%c ", i + 'A');
        for(int j = 0; j < M; j++){
            if(matriz[i][j] == 0){
                printf("-- ");
            }
            else if(matriz[i][j] == 1){
                printf("XX ");
            }
        }
        printf("\n");
    }

    return 0;
}