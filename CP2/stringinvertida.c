#include <stdio.h>

int main (){
    int tamanho = 0;
    char str[101];
    scanf("%[^\n]", str);

    while (str[tamanho] != '\0'){ // lendo e armazenando
        tamanho++;
    }

    for (int i = (tamanho -1); i >= 0; i--){
        printf("%c - %d\n", str[i], str[i]);
    }

    return 0;
}