#include <stdio.h>
int main() {
    int n, min;
    int  total_delay = 0, delayed_deliveries = 0;

    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        scanf("%d",&min);
        total_delay = total_delay + min;

        if (min >= 30) {
            delayed_deliveries++;
        }
    }

    printf("Total Delay: %d\n",total_delay);
    printf("Delayed Deliveries: %d",delayed_deliveries);

    return 0;
}
