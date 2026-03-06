#include <stdio.h>

#define MAX_SIZE 1002

char texto[MAX_SIZE];

int main() {
    char alvo, atual;
    int i, n;
    int total_palavras = 0;
    int palavras_com_alvo = 0;
    int dentro_da_palavra = 0;
    int ja_contou_nesta_palavra = 0;
    float freq;

    alvo = getchar();
    getchar(); 

    i = 0;
    while (i < MAX_SIZE - 1 && (atual = getchar()) != '\n' && atual != EOF) {
        texto[i++] = atual;
    }
    texto[i] = '\0';
    n = i;

    for (i = 0; i < n; i++) {
        if (texto[i] != ' ') {
            if (!dentro_da_palavra) {
                dentro_da_palavra = 1;
                total_palavras++;
                ja_contou_nesta_palavra = 0;
            }

            if (texto[i] == alvo && !ja_contou_nesta_palavra) {
                palavras_com_alvo++;
                ja_contou_nesta_palavra = 1;
            }
        } 
        else {
            dentro_da_palavra = 0;
        }
    } 

    if (total_palavras > 0)
        freq = ((float)palavras_com_alvo / (float)total_palavras) * 100.0;
    else
        freq = 0.0;
    
    printf("%.1f\n", freq);

    return 0;
}