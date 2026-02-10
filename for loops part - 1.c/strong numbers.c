#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0, fact;

    scanf("%d", &n);

    temp = n;

    for (; n > 0; n = n / 10) {
        digit = n % 10;
        fact = 1;

        for (int i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
    }

    if (sum == temp)
        printf("Yes");
    else
        printf("No");

    return 0;
}
