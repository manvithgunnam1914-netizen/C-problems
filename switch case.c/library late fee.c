#include <stdio.h>
int main() { 
    int bookType,daysLate;
    int fee = 0;

    scanf("%d %d",&bookType,&daysLate);

    switch(bookType) {
        case 1:
            fee = 2;
        break;

        case 2:
            fee = 5;
        break;

        default:
            printf("Invallid\n");
        break;

    }

    fee = fee * daysLate;

    printf("%d",fee);


    return 0;
}
