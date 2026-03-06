#include <stdio.h>
/*int contarEstrelas(int qtd, int abertura);

int main (){

    int teste = contarEstrelas(3,1000);
    printf("teste 1 %d\n",teste);
    teste =contarEstrelas(3,5869);
    printf("teste 2 %d\n",teste); 
    teste =contarEstrelas(9,2967);
    printf("teste 3 %d\n",teste); 

} */

int contarEstrelas(int qtd, int abertura){
    int entrada, contador =0;
    int cerebro = 40000000;

    for(int i = 0; i < qtd; i++){
        scanf("%d", &entrada);

        if(entrada * abertura >= cerebro){
            contador++;
        }
    }

    return contador;
}