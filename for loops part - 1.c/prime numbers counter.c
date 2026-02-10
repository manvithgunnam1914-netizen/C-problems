#include <stdio.h>

int main() {
    int n,i,j,count,primeCount = 0;

    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        count = 0;

        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        if (count == 2) {
            primeCount++;
        }
    }

    printf("%d",primeCount);

    return 0;
}
