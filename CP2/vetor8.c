#include <stdio.h>

int main (){
 
   int n;
   double  media=0, elemen = 0, totalmedia = 0, falso = 0;
   scanf("%d", &n);

   double vet[n], elementos[n];

   for (int i = 0; i < n; i++){
      scanf("%lf", &vet[i]);
        media += vet[i];
        
    }

    totalmedia = media / n;


    for (int i = 0; i < n; i++){
        if (vet[i] > totalmedia){
            falso = 1;
            printf("%.0lf ", vet[i]);
        }
    }

    if (falso == 0){
        printf("0\n");
    }

    return 0;
}

/* #include <stdio.h>

int main (){

   int n, soma=0, media = 0, falso = 0;
   scanf("%d", &n);

   double vet[10002];

   for (int i = 0; i < n; i++){
      scanf("%lf", &vet[i]);
        soma += vet[i];
    }

    media =(int)(soma / n);


    for (int i = 0; i < n; i++){
        if (vet[i] > media){
            falso = 1;
            (i!=n-1) ?printf("%.0lf ", vet[i]):printf("%.0lf", vet[i]);
        }
    }
    if (falso == 0) 
     printf("0");
    printf("\n");

    return 0;
}*/