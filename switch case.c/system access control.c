#include <stdio.h>
int main() { 
    int role,time;

    scanf("%d %d",&role,&time);

    switch(role) {
        case 1:
            printf("Full access anytime\n");
        break;
        case 2:
            if (time >= 6 && time <= 18) {
                printf("Limited Access\n");
            } else {
                printf("Access Denied\n");
            }
        break;
        default:
            printf("Invallid\n");
        break;

    }

    return 0;
}
