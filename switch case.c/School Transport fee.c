#include <stdio.h>
int main() {
    int distanceCategory,distance;
    int fee = 0;

    scanf("%d %d",&distanceCategory,&distance);

    switch(distanceCategory) {
        case 1:
            if (distance <= 5) {
                fee = 800;
            }
        break;

        case 2:
            if (distance >= 6 && distance <= 10) {
                fee = 1200;
            }
        break;

        case 3:
            if (distance > 10) {
                fee = 1800;
            }
        break;

        default:
            printf("Invallid\n");
        break;

    } 

    printf("Transport Fee %d",fee);

    return 0;
}
