#include <stdio.h>

int main() {
    unsigned long long Ta;
    int Gm;

    scanf("%llu %d", &Ta, &Gm);

    unsigned long long n = 1;
    while (n * n <= Ta) {
        n++;
    }
    n--; 
    for (int i = 0; i < Gm; i++) {
        
        if (n % 2 == 0) {
            n = n - 1;
        } else {
            n = 2 * n - 1;
        }

        
        unsigned long long T = n * n;

    
        printf("%llu\n", T);
    }

    return 0;
}