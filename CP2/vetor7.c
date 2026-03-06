#include <stdio.h>

int main (){

   int n;
   scanf("%d", &n);

   int vet[n], vet1[n];

   for (int i = 0; i < n; i++){
      scanf("%d", &vet[i]);
    }

   for(int i = 0; i < n; i++){
      scanf("%d", &vet1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if(vet[i] != vet1[i]){
            printf("nao\n");
            return 0;
        }
    }

    printf("sim\n");
      

   return 0;
}