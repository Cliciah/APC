#include <stdio.h>

int main (){
    int n, maiotam = 0, tamanho = 0;
    scanf("%d", &n);

    char str[101];

    for (int i = 0; i < n; i++){
        scanf("%s", str);
        while(str[tamanho] != '\0'){
            tamanho++;
        }
    }

    if (tamanho > maiotam){
        maiotam = tamanho;
    }
    
    printf("%d\n", maiotam);

    return 0;
}