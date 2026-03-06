#include <stdio.h>
/*double calculeVelocidadeMedia(int tA, int tB, double distancia);
int levouMulta (int tA, int tB, double distancia, double velocidadeMaxima);

int main (){
double teste, teste1;
teste= levouMulta(61200,63000,60.0,120.0);
printf("%.0lf\n", teste);
teste1= levouMulta(54169,57346,170.0,120.0);
printf("%.0lf\n", teste1);

}*/

double calculeVelocidadeMedia(int tA, int tB, double distancia){
    double vm = distancia / ((double)(tB - tA) / 3600);
    return vm;
}

int levouMulta (int tA, int tB, double distancia, double velocidadeMaxima){
    double velocidade_media= calculeVelocidadeMedia(tA,tB, distancia);
    if(velocidade_media > velocidadeMaxima){
    return 1;
    }

    else {
        return 0;
    }
}

