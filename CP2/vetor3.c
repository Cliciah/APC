#include <stdio.h>

int main (){

   int n;
   scanf("%d", &n);

   int vet[n], vetorpar[n], par = 0, vetorimpar[n], impar = 0;

   for (int i = 0; i < n; i++){
      scanf("%d", &vet[i]);

      if (vet[i] % 2 == 0){
         vetorpar[par++] = vet[i];
      }

      else{
         vetorimpar[impar++]= vet[i];
      }
   
   }

   for (int i = 0; i < par; i++){
      printf("%d ", vetorpar[i]);
   }

   printf("\n");

   for (int i = 0; i < impar; i++){
      printf("%d ", vetorimpar[i]);
   }
   printf("\n");

   return 0;
}