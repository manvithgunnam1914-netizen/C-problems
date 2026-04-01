#include <stdio.h>
int main() {
    int num;

    scanf("%d", &num);

    if (num >= 10 && num <= 50) {
        printf("The number is between 10 and 50");
    } else {
        printf("The number is NOT between 10 and 50");
    }

    return 0;
}
