#include <stdio.h>
int main() {
    int n, heart_rate_values = 0;
    int max_heart_rate = 0, danger_readings = 0;

    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        scanf("%d",&heart_rate_values);

        if (i == 1 || heart_rate_values > max_heart_rate) {
            max_heart_rate = heart_rate_values;
        }

        if (heart_rate_values >= 140) {
            danger_readings++;
        }
    }

    printf("Max Heart Rate: %d\n",max_heart_rate);
    printf("Danger Readings: %d",danger_readings);

    return 0;
}
