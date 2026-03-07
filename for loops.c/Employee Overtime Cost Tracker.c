#include <stdio.h>
int main() {
    int  n, overtime_hours;
    int total_hours = 0, overtime_cost = 0, heavy_overtime_days = 0;

    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        scanf("%d",&overtime_hours);

        total_hours = total_hours + overtime_hours;

        if (overtime_hours > 3) {
            heavy_overtime_days++;
        }
    }

    overtime_cost = total_hours * 200;

    printf("Total Overtime: %d\n",total_hours);
    printf("Overtime Cost: %d\n",overtime_cost);
    printf("Heavy Overtime: %d",heavy_overtime_days);

    return 0;
}
