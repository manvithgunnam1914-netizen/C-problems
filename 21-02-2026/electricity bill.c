#include <stdio.h>
int main() { 
    int units,bill_amount;

    scanf("%d",&units);

    if (units >= 0 && units <= 100) {
        bill_amount = units * 5;
    } else if (units >= 101 && units <= 200) {
        bill_amount = units * 7;
    } else if (units >= 201 && units <= 300) {
        bill_amount = units * 10;
    } else if (units > 300) {
        bill_amount = units * 15;
    } else {
        printf("Invalid Input");
    }

    printf("%d",bill_amount);

    return 0;
}
