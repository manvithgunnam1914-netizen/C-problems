#include <stdio.h>

int main() {
    int n,rain;
    int totalRainfall = 0,heavyDays = 0;

    scanf("%d",&n);


    for (int i = 1; i <= n; i++) {
        scanf("%d", &rain);
        totalRainfall = totalRainfall + rain;

        if (rain > 50) {
            heavyDays++;
        }
    }

    printf("%d\n",totalRainfall);
    printf("%d",heavyDays);

    return 0;
}
