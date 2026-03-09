#include <stdio.h>
int main() {
    int capacity, n;
    int items= 0, remaining_capacity = 0, overflow_days = 0;
    int total = 0, overflow_started = 0;

    scanf("%d",&capacity);
    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        scanf("%d",&items);
        total = total + items;

        if (total > capacity && overflow_started == 0) {
            overflow_days++;
            overflow_started = 1;
        }
    }

    printf("Remaining Capacity: %d\n",capacity - total);
    printf("Overflow Days: %d",overflow_days);

    return 0;
}
