#include <stdio.h>
int main() { 
    int type,balance,amount;

    scanf("%d %d %d",&type,&balance,&amount);

    switch(type) {
        case 1:
        if (balance >= amount) {
            printf("Transaction Successfull");
        } else {
            printf("Transaction Failled");
        }

        break;

        case 2:
        if (amount == 5000) {
            printf("Limit Not Exceeded");
        } else {
            printf("Limit Exceeded");
        }
        break;

        default:
        printf("Invalid");
    }


    return 0;
}
