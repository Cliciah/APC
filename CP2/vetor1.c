#include <stdio.h>

int main (){
    int n;

    scanf("%d", &n);

    int vet[n];
    int menor1 = 1000000, menor2 =1000000, menor3 =1000000;

    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);

        if (vet[i] < menor1){
            menor3 = menor2;
            menor2 = menor1;
            menor1 = vet[i];
            continue;
        }
        
    
        if (vet[i] >= menor1 && vet[i] < menor2){
            menor3 = menor2;
            menor2 = vet[i];
            continue;
        }

        if (vet[i] >= menor2 && vet[i] < menor3){
            menor3 = vet[i];
            continue;
        }
    }

    printf("%d\n%d\n", menor2, menor3);
    
    
    return 0;
}