#include <stdio.h>

/*int faz_conta_direito(int parcela, char op);



int main (){

    int teste1=faz_conta_direito(4,'-');
    printf("TESTE 1 %d\n",teste1);
    int teste2 = faz_conta_direito(4,'+');
    printf("TESTE 2 %d\n",teste2);
    int teste3 = faz_conta_direito(3,'+');
    printf("TESTE 3 %d\n",teste3);

    
    return 0;
}   */

int faz_conta_direito(int parcela, char op){
    int entrada, resultado=0;
    for (int i =0; i < parcela; i++){
        scanf("%d", &entrada);
        if(i==0){
            resultado=entrada;
            continue;
        }
        if (op=='-'){
            resultado-=entrada;
        }else{
            resultado+=entrada;
        }

    }
    return resultado;
}