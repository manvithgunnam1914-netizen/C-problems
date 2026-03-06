#include <stdio.h>
int main() {
    int n, voltage;
    int minimum_voltage = 0, low_voltage_events = 0;

    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        scanf("%d",&voltage);
        
        if (i == 1 || voltage < minimum_voltage) {
            minimum_voltage = voltage;
        }

        if (low_voltage_events < 210) {
            low_voltage_events++;
        }
    }

    printf("Minimum Voltage: %d\n",minimum_voltage);
    printf("Low Voltage Events: %d",low_voltage_events);

    return 0;
}
