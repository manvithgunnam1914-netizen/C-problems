#include <stdio.h>
int main() { 
    int class,extraWeight;
    int charge = 0;

    scanf("%d %d",&class,&extraWeight);

    switch(class) {
        case 1:
            charge = 300;
        break;
        case 2:
            if (extraWeight <= 3) {
                charge = 0;
            } else {
                charge = 300;
            }
        break;
        default:
            printf("Invalid\n");
    }

    charge = charge * extraWeight;

    printf("%d",charge);


    return 0;
}
