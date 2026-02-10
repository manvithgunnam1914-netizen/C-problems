#include <stdio.h>

int main() {
    int n,limit,amount;
    int total = 0;

    scanf("%d", &n);

    scanf("%d", &limit);


    for (int i = 1; i <= n; i++) {
        scanf("%d", &amount);
        total = total + amount;
    }

    printf("%d\n",total);

    if (total > limit) {
        printf("Approved");
    } else {
        printf("limit Exceeded");
    }

    return 0;
}
