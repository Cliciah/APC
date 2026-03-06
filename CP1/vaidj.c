#include <stdio.h>

int main (){
     
    int n, resto;
 
      scanf("%d", &n);

for (int i = 1; i <= n; i++){
 
    resto = i % 2;


    if (resto == 0){
        printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
    }
    else {
        printf("THUMS THUMS THUMS\n");
    }
}

    return 0;
}