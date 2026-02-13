#include <stdio.h>
int main() { 
    int hours;

    scanf("%d",&hours);

    switch(hours) {
        case 1:
            printf("Short Interruption\n");
        break;

        case 2:
        case 3:
        case 4:
            printf("Medium Interruption\n");
        break;

        default:
            if (hours > 4 && hours <= 24) {
                printf("Long Interruption\n");
            }
        break;
    }

    return 0;
}
