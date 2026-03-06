#include <stdio.h>
int main() {
    int n, rainFall;
    int totalRainFall = 0, heavyRains = 0;

    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        scanf("%d",&rainFall);
        totalRainFall = totalRainFall + rainFall;

        if (rainFall > 50) {
            heavyRains++;
        }
    }

    printf("%d\n",totalRainFall);
    printf("%d",heavyRains);

    return 0;
}
