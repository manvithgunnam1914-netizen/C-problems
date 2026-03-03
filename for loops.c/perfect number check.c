#include <stdio.h>
int main() {
    int n;
    int sum = 0;

    scanf("%d",&n);

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }
        if (sum == n && n != 0) {
            printf("perfect number\n");
        } else {
            printf("Not a perfect number");
        }
    
    return 0;
}
