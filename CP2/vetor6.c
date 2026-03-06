#include <stdio.h>

int main (){

   int n;
   scanf("%d", &n);

   int vet[n], vet1[n], vetsoma[n];

   for (int i = 0; i < n; i++){
      scanf("%d", &vet[i]);
    }

   for(int i = 0; i < n; i++){
      scanf("%d", &vet1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        vetsoma[i] = vet[i] + vet1[i];
        printf("%d ", vetsoma[i]);
    }

    printf("\n");
      

   return 0;
}