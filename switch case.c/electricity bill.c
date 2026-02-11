#include <stdio.h>
int main() {

    int type,units,bill = 0;

    scanf("%d %d",&type,&units);

    switch (type) {
        case 1:

        if (units <= 100) {
            bill = units * 3;
        } else {
            bill = (100 * 3) + ((units - 100) * 5);
            bill = bill - 80;
        } 
        
        printf("%d",bill);
        break;

        case 2:

        if (units <= 100) {
            bill = units * 7;
        } else {
            bill = (100 * 7) + ((units - 100) * 10);
        }

        printf("%d",bill);
        break;

        default:
        printf("Invalid type");

    }


    return 0;
}
