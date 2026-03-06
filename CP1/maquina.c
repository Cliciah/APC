#include <stdio.h>

int main (){

    // p = valor do produto e v = valor inserido / troco v - ps
    //switch case
     
    int p, v, troco, m1 = 0, m2 = 0, m3 = 0, m4 = 0, m5= 0, m6 = 0;

     scanf("%d %d", &p, &v);

     troco = v - p;
     

     if (troco > 0){
        m1=troco/500;
        troco %= 500;
        
     
        m2=troco/100;
        troco %= 100;

     
        m3=troco/50;
        troco %= 50;

     
        m4=troco/10;
        troco %= 10;

    
        m5=troco/5;
        troco %= 5;

    
        m6=troco/1;
        troco %=1;
     }

     printf("%d\n %d\n %d\n %d\n %d\n %d\n ", m1, m2, m3, m4, m5, m6);
  
    return 0;
}