#include <stdio.h>
// 8 primeiros digitos aleatorios e 2 ultimos sao digitos verificadores
int main (){

    unsigned long long int cpf;
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, soma1, soma2, dv1, dv2;
    scanf("%llu", &cpf);

    d1 = (cpf % 100000000000) / 10000000000;
    d2 = (cpf % 10000000000) / 1000000000;
    d3 = (cpf % 1000000000) / 100000000;
    d4 = (cpf % 100000000) / 10000000;
    d5 = (cpf % 10000000) / 1000000;
    d6 = (cpf % 1000000) / 100000;
    d7 = (cpf % 100000) / 10000;
    d8 = (cpf % 10000) / 1000;
    d9 = (cpf % 1000) / 100;
    d10 = (cpf % 100) / 10;
    d11 = (cpf % 10) / 1;

soma1 = ((d1 * 10) + (d2 * 9) + (d3 * 8) + (d4 * 7) + (d5 * 6) + (d6 * 5) + (d7 *4) + (d8 * 3) + (d9 * 2)) % 11;
dv1 = 11 - soma1;

if (dv1 > 9){
    dv1 = 0;
}

soma2 = ((d1 * 11) + (d2 * 10) + (d3 * 9) + (d4 * 8) + (d5 * 7) + (d6 * 6) + (d7 * 5) + (d8 * 4) + (d9 * 3) + (dv1 * 2)) % 11;
dv2 = 11 - soma2;

if (dv2 > 9){
    dv2 = 0;
}

if (d10 != dv1 || d11 != dv2){
    printf("invalido\n");
}
else {
    printf("valido\n");
}
    return 0;
}