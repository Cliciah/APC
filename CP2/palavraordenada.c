#include <stdio.h>

char to_lower_manual(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

int main() {
    const int MAX_TAM_PALAVRA = 43; // tamanho máximo da palavra (42 + '\0')
    const int MAX_P = 100;           // número máximo de palavras

    int P;
    char palavras[MAX_P][MAX_TAM_PALAVRA];
    int i;

    scanf("%d", &P);

    for (i = 0; i < P; i++) {
        scanf("%s", palavras[i]);
    }

    for (i = 0; i < P; i++) {
        printf("%s: ", palavras[i]);

        int ordenada = 1;
        int comprimento = 0;

        while (palavras[i][comprimento] != '\0') {
            comprimento++;
        }

        for (int j = 0; j < comprimento - 1; j++) {
            char atual = to_lower_manual(palavras[i][j]);
            char proximo = to_lower_manual(palavras[i][j+1]);

            if (atual >= proximo) {
                ordenada = 0;
                break;
            }
        }

        if (ordenada) {
            printf("O\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}