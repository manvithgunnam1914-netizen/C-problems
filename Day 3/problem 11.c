#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    if (x>=-9 && x<=9) {
        printf("Single Digit");
    }else {
        printf("Not Single Digit");
    }
    return 0;
}