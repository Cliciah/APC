#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int m[15][15];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &m[i][j]);

    int primeira_vez = 1;

    while (1) {
        int tem_linha_1 = 0;

        for (int i = 0; i < n; i++) {
            int all_ones = 1;
            for (int j = 0; j < n; j++) {
                if (m[i][j] != 1) {
                    all_ones = 0;
                    break;
                }
            }
            if (all_ones) {
                tem_linha_1 = 1;
                for (int j = 0; j < n; j++)
                    m[i][j] = 0;
            }
        }

    
        if (!primeira_vez) printf("\n"); 
        else primeira_vez = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d", m[i][j]);
                if (j < n - 1) printf(" ");
            }
            printf("\n");
        }

        for (int j = 0; j < n; j++) {
            int count_ones = 0;
            for (int i = 0; i < n; i++) {
                if (m[i][j] == 1)
                    count_ones++;
            }
            for (int i = 0; i < n - count_ones; i++)
                m[i][j] = 0;
        
            for (int i = n - count_ones; i < n; i++)
                m[i][j] = 1;
        }

        printf("\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d", m[i][j]);
                if (j < n - 1) printf(" ");
            }
            printf("\n");
        }
        
        tem_linha_1 = 0;
        for (int i = 0; i < n; i++) {
            int all_ones = 1;
            for (int j = 0; j < n; j++) {
                if (m[i][j] != 1) {
                    all_ones = 0;
                    break;
                }
            }
            if (all_ones) {
                tem_linha_1 = 1;
            }
        }
        
        if (!tem_linha_1) break;
    }

    return 0;
}