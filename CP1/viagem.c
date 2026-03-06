#include <stdio.h>

int main(){
    // d dias
    //r quantos restaurantes 

    int restaurantes;
    int codigo, nota;
    int dia=1;
    while (scanf("%d", &restaurantes) != EOF){
        printf("Dia %d\n",dia);
        int melhor_cod=-1,melhor_nota=-1;
        for(int i=0;i<restaurantes;i++){
            scanf("%d %d", &codigo,&nota);
            if(nota> melhor_nota){
                melhor_nota= nota;
                melhor_cod=codigo;
            }
            else if (nota==melhor_nota &&codigo< melhor_cod)
            {
                melhor_cod=codigo;
            }
            
        }
        printf("%d\n\n", melhor_cod);
        dia++;

    }


    return 0;
}