#include <stdio.h>
int main() { 
    int fuelType,litres;
    int cost = 0;

    scanf("%d %d",&fuelType,&litres);

    switch(fuelType) {
        case 1:
            cost = 105;
        break;

        case 2:
            cost = 92;
        break;

        case 3:
            cost = 85;
        break;

        default:
            printf("Invallid\n");
        break;

    }

    cost = cost * litres;

    printf("%d",cost);

    return 0;
}
