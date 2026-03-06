#include <stdio.h>

int main(){
    char risada[62];
    char vogais[62];
    scanf("%s", risada);
    int j = 0;
    for(int i = 0; risada[i] != '\0'; i++){
        if(risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u'){
            vogais[j] = risada[i];
            j++;
        }
    }

    vogais[j] = '\0';

    int engraçado = 1; // verdadeiro
    for(int i = 0, k = j - 1; vogais[i] != '\0' && k >= 0; i++, k--){
        if(vogais[i] != vogais[k]){
            engraçado = 0; // falso
        }
    }

    if(j == 0){
        printf("Valor invalido!");
    }
    else if(engraçado == 1){
        printf("S");
    }
    else if(engraçado == 0){
        printf("N");
    }

    return 0;
}