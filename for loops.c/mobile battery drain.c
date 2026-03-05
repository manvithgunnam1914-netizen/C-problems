#include <stdio.h>
int main() {
    int batteryPercent, n, perHour;
    int battery;
    int drain = 0;

    scanf("%d %d",&batteryPercent,&n);

    battery = batteryPercent;

    for (int i = 1; i <= n; i++) {
        scanf("%d",&perHour);
        drain = drain + perHour;
    }
    battery = battery - drain;

    printf("%d",battery);

    return 0;
}
