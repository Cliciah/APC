#include <stdio.h>

    void swap(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;

    }

void swap3(int *a, int *b, int *c){
    if(*a>*b){
        swap(a,b);
    }

    if(*b>*c){
        swap(b,c);
    }

    if(*a>*b){
        swap(a,b);
    }

}