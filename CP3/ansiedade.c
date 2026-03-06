#include <stdio.h>

int main (){
    char str[5];
    int contadorsim = 0, contadornao = 0, qrd_triagem = 0,contador_perguntas=0;

    while(scanf("%s", str) != EOF) {
    
        if(str[0] == 's' && str[1] == 'i' && str[2] == 'm'){
            contadorsim++;
        }
        
        if(str[0] == 'n' && str[1] == 'a' && str[2] == 'o'){
            contadornao++;
        }

        contador_perguntas++;
        if(contador_perguntas==10){
            if(contadorsim>=2){
                qrd_triagem++;
            }
            contadorsim=0;
            contador_perguntas=0;
        }
    }

    printf("%d\n", qrd_triagem);
    
return 0;
}
