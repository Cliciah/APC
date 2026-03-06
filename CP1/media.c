#include <stdio.h>

int main (){

    double p1, p2, p3, T, l1, l2, l3, l4, l5, ML, MF; 

    scanf("%lf %lf %lf", &p1, &p2, &p3);
    scanf("%lf", &T);
    scanf("%lf %lf %lf %lf %lf", &l1, &l2, &l3, &l4, &l5);

    ML =  (l1 + l2 +l3 + l4 + l5) / 10;
    MF = (p1 + (2 * p2) + (3 *p3) + (2 * T))/ 8 + ML;

    printf("%.2f\n", MF); // float coloca mais casas deciamis, o %.2f limita a quantiade de casas decimais a serem apresentadas, nesse caso, duas casas, que é o que o exercicio pede

    return 0;
}