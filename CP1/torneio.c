#include <stdio.h>

char vencedor(int e, int j1, int j2, char nome1, char nome2) {
    int soma = j1 + j2;
    int par_ou_impar = soma % 2;

    if (par_ou_impar == e)
        return nome1;
    else
        return nome2;
}

int main() {
    int e1, j1a, j1b;
    int e2, j2c, j2d;
    int ef, jf1, jf2;

    scanf("%d %d %d", &e1, &j1a, &j1b);
    scanf("%d %d %d", &e2, &j2c, &j2d);
    scanf("%d %d %d", &ef, &jf1, &jf2);

    char vencedor1 = vencedor(e1, j1a, j1b, 'A', 'B');
    char vencedor2 = vencedor(e2, j2c, j2d, 'C', 'D');
    
    char jogador1 = vencedor1;
    char jogador2 = vencedor2;

    char vencedor_final = vencedor(ef, jf1, jf2, jogador1, jogador2);

    printf("%c\n", vencedor_final);

    return 0;
}