#include <stdio.h>

float calculateBill(int units) {
    float bill = 50;  
    if (units <= 100) {
        bill += units * 0.50;
    } 
    else if (units <= 200) {
        bill += (100 * 0.50) + (units - 100) * 0.75;
    } 
    else {
        bill += (100 * 0.50) + (100 * 0.75) + (units - 200) * 1.00;
    }

    return bill;
}

int main() {
    int units;
    scanf("%d", &units);
    printf("Total Bill = %.2f\n", calculateBill(units));
    return 0;
}
