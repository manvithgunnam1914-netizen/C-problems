#include <stdio.h>
int main() { 
    int vehicleType,trips;
    int charge = 0;

    scanf("%d %d",&vehicleType,&trips);

    switch(vehicleType) {
        case 1:
        if (trips == 1) {
            charge = 100;
        } else if (trips <= 2 && trips >= 10) {
            charge = 800;
        } else {
            charge = 800;
        }
        break;

        case 2:
        charge = 240;
        break;

        default:
        printf("Invalid\n");
        break;
        return 0;
    }
    if (vehicleType == 1) {
        charge = 800;
    } else {
        charge = charge * trips;
    }

    printf("%d",charge);

    return 0;
}
