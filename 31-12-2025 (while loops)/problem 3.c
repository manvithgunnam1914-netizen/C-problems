#include <stdio.h>
int main() {
    int num,reminder,sum=0;
    scanf("%d",&num);

    while (num != 0) {
        reminder = num % 10;
        sum = sum + reminder;
        num = num / 10;
    }    
    printf("%d",sum);
    return 0;
}