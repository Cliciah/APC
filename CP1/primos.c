#include <stdio.h>

int eprimo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    int T;
    scanf("%d", &T);

    int nums[T];
    for (int i = 0; i < T; i++)
        scanf("%d", &nums[i]);

    for (int i = 0; i < T; i++) {
        int m = nums[i];
        int arrojado = 1;              
        while (m > 0) {
            if (!eprimo(m)) {          
                arrojado = 0;
                break;
            }
            m /= 10;                   
        }

        printf("%c\n", arrojado ? 'S' : 'N');
    }

    return 0;
}