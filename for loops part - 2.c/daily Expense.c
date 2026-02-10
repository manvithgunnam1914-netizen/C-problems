#include <stdio.h>

int main() {
    int n,limit,expense;
    int total = 0, overDays = 0;

    scanf("%d", &n);

    scanf("%d", &limit);


    for (int i = 1; i <= n; i++) {
        scanf("%d", &expense);
        total = total + expense;

        if (expense > limit) {
            overDays++;
        }
    }

    printf("%d\n", total);
    printf("%d", overDays);

    return 0;
}
