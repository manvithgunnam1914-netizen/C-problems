#include <stdio.h>

int main() {
    int n, drain;
    int battery = 100;

    scanf("%d",&n);

    scanf("%d",&drain);

    for (int i = 1; i <= n; i++) {
        battery = battery - drain;

        if (battery <= 0) {
            battery = 0;
            break;
        }
    }

    printf("%d", battery);

    return 0;
}
