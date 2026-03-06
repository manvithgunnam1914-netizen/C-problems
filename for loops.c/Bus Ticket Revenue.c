#include <stdio.h>
int main() {
    int n,ticketPrice;
    int sum = 0;

    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        scanf("%d",&ticketPrice);
        sum = sum + ticketPrice;
    }

    printf("%d",sum);

    return 0;
}
