#include <stdio.h>
int main() {
    int durationType,month;
    int fee = 0;

    scanf("%d",&durationType);

    switch(durationType) {
        case 1:
            fee = 1500;
        break;

        case 2:
            fee = 4000;
        break;

        case 3:
            fee = 7000;
        break;

        default:
            printf("Invallid\n");
        break;
    }

    printf("%d",fee);

    return 0;
}
