#include <stdio.h>
int main(){

    long int hora, minuto, segundo;

    scanf("%ld", &hora);

    minuto = hora * 60;
    segundo = minuto * 60;

    printf("%ld\n %ld\n", minuto,segundo);

    return 0;
}