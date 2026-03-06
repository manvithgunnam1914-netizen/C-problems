#include <stdio.h>
int main() {
    int cash, n, withdrawal_amount,temp;
    int remaining_cash, risk_count = 0, withdrawal_cash = 0;

    scanf("%d",&cash);
    temp = cash;

    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        scanf("%d",&withdrawal_amount);
        withdrawal_cash = withdrawal_cash + withdrawal_amount;

        if (withdrawal_amount >= 5000) {
            risk_count++;
        }
    }
    remaining_cash = temp - withdrawal_cash;

    printf("Remaining Cash: %d\n",remaining_cash);
    printf("Risk Count: %d",risk_count);

    return 0;
}
