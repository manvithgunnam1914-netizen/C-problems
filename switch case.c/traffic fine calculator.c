#include <stdio.h>
int main() {
    int violationType;
    int fine = 0;

    scanf("%d",&violationType);

    switch(violationType) {
        case 1:
            fine = 1000;
        break;

        case 2:
            fine = 1500;
        break;

        case 3:
            fine = 2000;
        break;

        default:
            printf("Invallid\n");
        break;

    }

    printf("%d",fine);

    return 0;
}
