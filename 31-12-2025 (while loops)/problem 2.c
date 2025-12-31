#include <stdio.h>
int main() {
    int num,reverse=0,reminder;
    scanf("%d",&num);

    while (num != 0) {
        reminder = num%10;
        reverse = reverse * 10 + reminder;
        num = num / 10;
    }
    printf("%d",reverse);
    
    return 0;
}