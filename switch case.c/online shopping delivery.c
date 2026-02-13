#include <stdio.h>
int main() { 
    int deliveryMode;
    int charges = 0;

    scanf("%d",&deliveryMode);

    switch(deliveryMode) {
        case 1:
            charges = 40;
        break;

        case 2:
            charges = 120;
        break;

        case 3:
            charges = 0;
        break;

        default:
            printf("Invallid\n");
        break;

    }

    printf("%d",charges);


    return 0;
}
