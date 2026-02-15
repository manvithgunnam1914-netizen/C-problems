#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int price,highest = 0;
    int highCount = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d",&price);

        if(i == 0 || price > highest) {
            highest = price;
        }

        if(price > 100) {
            highCount++;
        }
    }

    printf("%d\n", highest);
    printf("%d\n", highCount);

    return 0;
}
