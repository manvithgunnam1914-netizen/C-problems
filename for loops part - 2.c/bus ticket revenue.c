#include <stdio.h>

int main() {
    int n,fare;
    int total = 0;

    scanf("%d", &n);


    for (int i = 1; i <= n; i++) {
        scanf("%d", &fare);
        total = total + fare;
    }

    printf("%d",total);

    return 0;
}
