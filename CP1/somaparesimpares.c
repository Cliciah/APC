#include <stdio.h>

int main (){

    int n=1, pares = 0, impares = 0;

    while (n != 0){
        scanf("%d", &n);

        if (n % 2 == 0 ){
            pares += n;
        }

        else{
            impares +=n;
        }

    }

 printf("%d %d\n", pares, impares);

    return 0;
}