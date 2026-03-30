#include <stdio.h>
int main() {
    int n, i = 2, j, prime, sum = 0;

    scanf("%d", &n);

    while(i <= n) {
        prime = 1;

        j = 2;
        while(j <= i / 2) {
            if(i % j == 0) {
                prime = 0;
                break;
            }
            j++;
        }

        if(prime == 1) {
            sum = sum + i;
        }

        i++;
    }

    printf("%d", sum);

    return 0;
}
