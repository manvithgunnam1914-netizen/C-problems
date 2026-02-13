#include <stdio.h>
int main() {
    int vehicleType,distance;
    int fare = 0;

    scanf("%d %d",&vehicleType,&distance);

    switch(vehicleType) {
        case 1:
            fare = 10;
        break;

        case 2:
            fare = 15;
        break;

        case 3:
            fare = 20;
        break;

        default:
            printf("Invallid\n");
        break;

    }

    fare = fare * distance;

    printf("%d",fare);


    return 0;
}
