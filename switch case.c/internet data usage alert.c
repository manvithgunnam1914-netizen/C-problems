#include <stdio.h>
int main() { 
    int planType;
    float dataUsed;

    scanf("%d %f",&planType,&dataUsed);

    switch(planType) {
        case 1:
            if (dataUsed <= 1.0) {
                printf("Normal Speed\n");
            } else if (dataUsed > 1.0 && dataUsed <= 5.0) {
                printf("Speed Reduced\n");
            }
            break;
        case 2:
            if (dataUsed <= 2.0) {
                printf("Normal Speed\n");
            } else if (dataUsed > 2.0 && dataUsed <= 5.0) {
                printf("Extra Charges Applled\n");
            }
            break;
        default:
            printf("Invalid\n");
            return 0;
    }


    return 0;
}
