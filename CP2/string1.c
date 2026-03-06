#include <stdio.h>

int main (){
    int contador = 0;
    char string[1000];

    scanf("%s", string);

    while (string[++contador]!='\0'){
        continue;
    }
    printf("%d\n",contador);
    return 0;
}