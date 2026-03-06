#include <stdio.h>
int main() {
    int n, daily_revenue;
    int total_revenue = 0, target_days = 0;

    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        scanf("%d",&daily_revenue);
        total_revenue = total_revenue + daily_revenue;

        if (daily_revenue > 50000) {
            target_days++;
        }
    }

    printf("Total Revenue: %d\n",total_revenue);
    printf("Target Days: %d",target_days);

    return 0;
}
