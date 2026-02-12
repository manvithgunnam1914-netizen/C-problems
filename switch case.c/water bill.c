#include <stdio.h>
int main() { 
    int type,units;
    int bill = 0;

    scanf("%d %d",&type,&units);

    switch(type) {
        case 1:
           if (units <= 30) {
            bill = units * 5;
           } else {
            bill = units * 8;
           }
        break;
        case 2:
           bill = units * 10;
        break;
        default:
           printf("Invalid\n");
        break;
    }

    printf("%d",bill);

    return 0;
}
