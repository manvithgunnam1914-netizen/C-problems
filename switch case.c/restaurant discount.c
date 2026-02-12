#include <stdio.h>
int main() { 
    int type,amount;
    float discount = 0,bill = 0;
    
    scanf("%d %d",&type,&amount);

    switch(type) {
        case 1:
            discount = amount * 0.05;
        break;
        case 2:
            discount = amount * 0.15;
        break;
        default:
            printf("Invallid\n");
        break;
    }
    bill = amount - discount;

    printf("%.0f",bill);

    return 0;
}
