#include <stdio.h>

float calculateBill(int units)
{
    float bill = 0;

    if (units <= 50)
        bill = units * 1.5;
    else if (units <= 100)
        bill = 50 * 1.5 + (units - 50) * 2.0;
    else if (units <= 150)
        bill = 50 * 1.5 + 50 * 2.0 + (units - 100) * 3.0;
    else if (units <= 200)
        bill = 50 * 1.5 + 50 * 2.0 + 50 * 3.0 + (units - 150) * 4.0;
    else
        bill = 50 * 1.5 + 50 * 2.0 + 50 * 3.0 + 50 * 4.0 + (units - 200) * 5.0;

    return bill;
}

int main()
{
    int units;
    float total;

    scanf("%d", &units);

    total = calculateBill(units);

    printf("Total Electricity Bill = %.2f\n", total);
    return 0;
}
