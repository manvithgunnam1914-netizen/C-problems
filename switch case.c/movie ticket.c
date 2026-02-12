#include <stdio.h>
int main() { 
    int type,time;
    int ticket = 0;

    scanf("%d %d",&type,&time);

    switch(type) {
        case 1:
            ticket = 150;
        break;
        case 2:
            ticket = 250;
        break;
        default:
            printf("Invallid\n");
        break;
    }
    if (time >= 18) {
        ticket = ticket + 50;
    }

    printf("%d",ticket);

    return 0;
}
