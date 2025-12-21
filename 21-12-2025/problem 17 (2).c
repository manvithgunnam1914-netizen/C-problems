#include <stdio.h>
int main() {
    int a1,a2,a3;
    scanf("%d %d %d",&a1,&a2,&a3);
    if (a1 + a2 + a3 == 180 && a1 != 0 && a2 != 0 && a3 != 0) {
        printf("Valid");
    }else {
        printf("Not Valid");
    }
    return 0;
}