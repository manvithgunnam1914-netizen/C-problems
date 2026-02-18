#include <stdio.h>
int main() { 
    int n,count;
    int primeCount = 0;

    scanf("%d",&n);

    for (int i = 2; i <= n; i++) {
        count = 0;

    for (int j = 1; j <= i; j++) {
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
