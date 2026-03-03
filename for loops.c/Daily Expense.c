#include <stdio.h>
int main() {
    int n,expense;
    int total = 0, overDays = 0;

    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        scanf("%d",&expense);
        total = total + expense;
    }

    if (expense > 1000) {
        overDays++;
    }

    printf("%d\n",total);
    printf("%d",overDays);

    return 0;
}
