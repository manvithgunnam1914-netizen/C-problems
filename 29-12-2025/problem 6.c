#include <stdio.h>
int main() {
    int digit;
    scanf("%d",&digit);
    if (digit>=0&&digit<=9) {
        printf("Single Digit");
    } else {
        printf("Not Single Digit");
    }
    return 0;
}