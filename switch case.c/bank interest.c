#include <stdio.h>

int main() {
    int accountType,years;
    float rate = 0;

    scanf("%d %d",&accountType,&years);


    switch(accountType) {

        case 1:  
            rate = 4;
            break;

        case 2:
            if(years <= 3)
                rate = 5;
            else
                rate = 7;
            break;

        default:
            printf("Invalid\n");
            return 0;
    }

    printf("%.0f%%\n",rate);

    return 0;
}
