#include <stdio.h>
int main() {
    int percentage;
    scanf("%d",&percentage);
    if (percentage>=90 && percentage<=100) {
        printf("A");
    }else if (percentage>=75 && percentage<=89) {
        printf("B");
    }else if (percentage>=55 && percentage<=74) {
        printf("C");
    }else if (percentage>=35 && percentage<=54) {
        printf("D");
    }else if (percentage<35 && percentage>=0) {
        printf("FAIL");
    }
    return 0;
}