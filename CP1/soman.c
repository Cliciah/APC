// aqui usa for pra fazer a soma, pede pra saber quantos nuemros será lido e somados
#include <stdio.h>

int main (){

    int n, x, soma = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++){
    
        scanf("%d", &x);
        soma = soma + x;
    }
    
    printf("%d\n", soma);

    return 0;
}                              