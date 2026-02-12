#include <stdio.h>
int main() { 
    int vehicleType,hours;
    int fee = 0;

    scanf("%d %d",&vehicleType,&hours);

    switch(vehicleType) {
        case 1:
            fee = 10;
        break;
        case 2:
            fee = 20;
        break;
        default:
            fee = 20;
        break;
        return 0;
    }
    fee = fee * hours;

    printf("%d",fee);


    return 0;
}
