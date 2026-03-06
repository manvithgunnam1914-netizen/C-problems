#include <stdio.h>
int main() {
    int n, fuel_price;
    int highest_price = 0, high_price_days = 0;

    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        scanf("%d",&fuel_price);

        if(i == 0 || fuel_price > highest_price) {
            highest_price = fuel_price;
        }

        if (fuel_price > 100) {
            high_price_days++;
        }
    }

    printf("Highest Price: %d\n",highest_price);
    printf("High Price Days: %d",high_price_days);

    return 0;
}
