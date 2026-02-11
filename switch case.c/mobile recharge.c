#include <stdio.h>

int main() {
    int type, mode;
    int amount = 0, cashback = 0;

    scanf("%d %d",&type,&mode);


    switch(type) {
        case 1:
            amount = 199;
            break;

        case 2:
            amount = 399;
            break;

        default:
            printf("Invalid\n");
            return 0;
    }

    switch(mode) {
        case 11:
        case 12:
            cashback = 20;
            break;

        case 13:
            cashback = 0;
            break;

        default:
            printf("Invalid\n");
            return 0;
    }

    printf("%d\n", amount - cashback);

    return 0;
}
