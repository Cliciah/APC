#include <stdio.h>

int main (){
    int n, vet[10000], menor, indice;
    
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
        menor = vet[0];
        indice = 0;
    }

    for(int i = 1; i < n; i++){
        
        if (vet[i] < menor){
            menor = vet[i];
            indice = i;

        }

    }

printf("%d\n", indice);
    
    return 0;
}