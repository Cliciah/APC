#include <stdio.h>

int main() {
    int mat[10][10];
    int x, y, max = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] > max) {
                max = mat[i][j];
                x = i;
                y = j;
            }
        }
    }

    char move;
    while (scanf(" %c", &move) == 1 && move != 'p') {
        int nx = x;
        int ny = y;

        if (move == 'w') nx--;
        else if (move == 's') nx++;
        else if (move == 'a') ny--;
        else if (move == 'd') ny++;

        if (nx < 0 || nx >= 10 || ny < 0 || ny >= 10) {
            printf("Bateu na parede\n");
            return 0;
        }

        if (mat[nx][ny] > 1) {
            printf("Bateu em si mesma\n");
            return 0;
        }

        printf("Nao bateu\n");

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (mat[i][j] > 0) {
                    mat[i][j]--;
                }
            }
        }

        x = nx;
        y = ny;
        mat[x][y] = max;
    }

    printf("Venceu\n");

    return 0;
}