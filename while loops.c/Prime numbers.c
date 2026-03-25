#include <stdio.h>
int main() {
    int n, i = 2, j, isPrime;

    scanf("%d", &n);

    while(i <= n) {
        j = 2;
        isPrime = 1;

        while(j <= i / 2) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
            j++;
        }

        if(isPrime == 1) {
            printf("%d ", i);
        }

        i++;
    }

    return 0;
}
