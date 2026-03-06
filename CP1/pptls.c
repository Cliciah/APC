//pedra papel tesoura lagartado spock
#include <stdio.h>

int main (){

    int A, B;
    scanf("%d\n %d", &A, &B);

    if ( A == B){
        printf("empate\n");
        return 0;
    }

    else if ((A == 0 && (B == 2 || B == 3)) ||
            (A == 1 && (B == 0 || B == 4)) ||
            (A == 2 && (B == 1 || B == 3)) ||
            (A == 3 && (B == 1 || B == 4)) ||
            (A == 4 && (B == 0 || B == 2))){
                
                printf("A\n");
    }
    
    else {
        printf("B\n");
        return 0;
    }
   

    return 0;
}