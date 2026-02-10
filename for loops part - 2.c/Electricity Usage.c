#include <stdio.h>

int main() {
    int n,units;
    int totalUnits = 0;

    scanf("%d", &n);


    for (int i = 1; i <= n; i++) {
        scanf("%d", &units);
        totalUnits = totalUnits + units;
    }

    printf("%d",totalUnits);

    return 0;
}
