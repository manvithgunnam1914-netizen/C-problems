#include <stdio.h>
int main() {
    int n;

    scanf("%d",&n);

    int balance;
    
    scanf("%d",&balance);

    int i = 1;
    int transaction;
    int lowBalanceDays = 0;

    while(i <= n) {
        scanf("%d",&transaction);

        balance = balance + transaction;

        if(balance < 0) {
            lowBalanceDays++;
        }

        i++;
    }

    printf("%d\n",balance);
    printf("%d\n",lowBalanceDays);

    return 0;
}
