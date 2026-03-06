#include <stdio.h>

int main (){

    int n=1, soma = 0;

    while (n != 0){
        scanf("%d", &n);

        if (n % 2 == 0 ){
            soma += n;
        }

    }

 printf("%d\n", soma);

    return 0;
}

// primeiro ler os n até 0 - ok
// soma os n
// compara o resto da divisão
//printa os pares