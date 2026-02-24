#include <stdio.h>

int main() {
    float balance,withdrawal;

    scanf("%f",&balance);

    scanf("%f",&withdrawal);

    if (withdrawal > 25000) {
        printf("Limit Exceeded\n");
    }
    else if (balance - withdrawal < 1000) {
        printf("Error\n");
    }
    else {
        balance = balance - withdrawal;
        printf("%.2f\n",balance);
    }

    return 0;
}
