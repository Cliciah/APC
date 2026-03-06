/*#include <stdio.h>

int encaixa(int a, int b);
int segmento(int a, int b);

int main (){
    int test;
    test = segmento(567890,890);
    printf("teste 1: %d\n", test);
    test = segmento(1234,1234);
    printf("teste 2: %d\n", test);
    test = segmento(2457,245);
    printf("teste 3: %d\n", test);
    test = segmento(567890,678);
    printf("teste 4: %d\n", test);
    test = segmento(1243,2212435);
    printf("teste 5: %d\n", test);
    test = segmento(235,236);
    printf("teste 6: %d\n", test);
    
    return 0;
}*/

int encaixa(int a, int b){
    int restoa, restob;

    while( b > 0){
        restoa = a % 10;
        restob = b % 10;
        
        if(restob != restoa){
            return 0;
        }
        b = b/10;
        a = a/10;
    }
    return 1;
}

int segmento(int a, int b){
    int maior, menor;

    if (a > b) {
        maior = a;
        menor = b;
    } else {
        maior = b;
        menor = a;
    }

    while (maior >= menor) {
        if (encaixa(maior, menor) == 1) {
            return 1; 
        }
        maior = maior / 10; 
    }

    return 0;
}