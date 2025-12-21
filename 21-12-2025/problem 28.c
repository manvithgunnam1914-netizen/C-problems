#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if (num > 0 && num%2 == 0) {
        printf("Positive Even");
    }else if (num > 0 && num%2 != 0) {
        printf("Positive Odd");
    }else {
        printf("Negative");
    }
    return 0;
}