#include <stdio.h>
int main() {
    int n, units = 0;
    int total_units = 0, spike_hours = 0;

    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        scanf("%d",&units);
        total_units = total_units + units;

        if (units >= 5) {
            spike_hours++;
        }
    }

    printf("Total units: %d\n",total_units);
    printf("Spike Hours: %d",spike_hours);

    return 0;
}
