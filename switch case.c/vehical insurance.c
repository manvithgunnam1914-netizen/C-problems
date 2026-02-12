#include <stdio.h>
int main() { 
    int wheelType,age;
    int premium = 0;

    scanf("%d %d",&wheelType,&age);

    switch(wheelType) {
        case 1:
            if (age <= 5) {
                premium = 1500;
            } else if (age > 5 && age <= 20) {
                premium = 2500;
            }
        break;

        case 2:
            if (age <= 5) {
                premium = 4000;
            } else if (age > 5 && age <= 20) {
                premium = 6000;
            }
        break;
        default:
            printf("Invalid\n");
        return 0;
    }

    printf("%d",premium);
    
    return 0;
}
