#include <stdio.h>
int main() { 
    int category,distance;

    scanf("%d %d",&category,&distance);

    switch(category) {
        case 1:
            if (distance <= 30) {
                printf("Eligible\n");
            } else {
                printf("Eligible with extra fee\n");
            }
        break;
        case 2:
            if (distance <= 30) {
                printf("Eligible\n");
            } else {
                printf("Not Eligible\n");
            }
            break;
        default:
            printf("Invallid\n");
    }

    return 0;
}
