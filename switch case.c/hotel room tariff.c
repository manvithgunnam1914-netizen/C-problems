#include <stdio.h>
int main() { 

    int roomType,tariff;
    char season;

    scanf("%d %c",&roomType,&season);

    switch(roomType) {
        case 1:
    switch(season) {
        case 'A':
            tariff = 2500;
            break;
        case 'B':
            tariff = 2000;
            break;
        default:
            printf("Invalid\n");
            return 0;
    } 
        break;

        case 2:
    switch(season) {
        case 'C':
            tariff = 4000;
            break;
        case 'D':
            tariff = 3000;
            break;
        default:
            printf("Invalid\n");
            return 0;
    }
    break;

    } 

    printf("%d",tariff);
    


    return 0;
}
