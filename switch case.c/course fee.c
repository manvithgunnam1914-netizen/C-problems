#include <stdio.h>
int main() { 
    int mode,fee = 0;
    char category;

    scanf("%d %c",&mode,&category);

    switch(mode) {
        case 1:
        switch(category) {
            case 'R':
                fee = 5000;
            break;
            case 'S':
                fee = 3000;
            break;
        }
        break;

        case 2:
        switch(category) {
            case 'R':
                fee = 9000;
            break;
            case 'S':
                fee = 7000;
            break;
        }
        break;

        default:
            printf("Invalid\n");
        break;
        return 0;

    }

    printf("%d",fee);


    return 0;
}
