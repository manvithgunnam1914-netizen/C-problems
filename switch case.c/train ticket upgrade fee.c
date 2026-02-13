#include <stdio.h>
int main() { 
    int class;
    int fee = 0;

    scanf("%d",&class);

    switch(class) {
        case 1:
            fee = 300;
        break;

        case 2:
            fee = 800;
        break;

        case 3:
            fee = 1500;
        break;

        default:
            printf("Invallid\n");
        break;

    }

    printf("Upgrade Fee %d",fee);


    return 0;
}
