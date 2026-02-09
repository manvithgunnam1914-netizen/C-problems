#include <stdio.h>

int main() {
    int n, limit, sum = 0;

    scanf("%d", &n);

    scanf("%d", &limit);

    for (int i = n; i <= limit; i = i + n) {
        sum = sum + i;
    }

    printf("%d", sum);

    return 0;
}
