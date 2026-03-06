#include <stdio.h>

int main (){
    int cc, n1, n2, n3, n4, n5, n6, soma, dv;

    scanf("%d", &cc);

    n1 = (cc % 1000000) / 100000;
    n2 = (cc % 100000) / 10000;
    n3 = (cc % 10000) / 1000;
    n4 = (cc % 1000) / 100;
    n5 = (cc % 100) / 10;
    n6 = (cc % 10) / 1;

  soma = ((n1 * 7) + (n2 * 6) + (n3 * 5) + (n4 * 4) + (n5 * 3) + (n6 * 2)) % 11;
  dv = 11 - soma;

 printf("%d\n", dv);

    return 0;
}