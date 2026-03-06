#include <stdio.h>

/*int validaPeso (double pesoKg);
void fazTonelada (double pesoKg);
void fazGrama (double pesoKg);

int main (){
    double teste1;
    
    scanf("%lf",&teste1);
    if(validaPeso(teste1)){
        fazGrama(teste1);
        fazTonelada(teste1);
    }else{
        printf("O VALOR QUE VC INSERIU É INVÁLIDO, N EXISTE PESO NEGATIVO.");
    }
  
} */

int validaPeso(double pesoKg){
 if (pesoKg < 0){
    return 0;
 }

 else{
    return 1;
 }

} 

void fazGrama(double pesoKg){
    double  gramas =  pesoKg * 1000;
    printf("%.4lf\n", gramas);
}

void fazTonelada(double pesoKg){
    double tonelada = (pesoKg / 1000);
    printf("%.4lf\n", tonelada);
}