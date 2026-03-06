/*#include <stdio.h>
double exp_natural (int x, int n);
int fatorial(int n);
double potencia(double base, double expoente);
int main (){

    double test;
    test = exp_natural(3,4);
    printf("%lf\n",test);
}*/

double exp_natural (int x, int n){
    double resultado = 1.0, termo =1.0;
    int i;

    for (i = 1; i <= n; i++) {
            termo = termo * (double)x / (double)i;
            resultado+=termo;
        }

    return resultado;
}
