#include <stdio.h>
int main() {
    int num,reminder,reverse=0,original;
    scanf("%d",&num);

    original = num;
    while (num != 0) {
        reminder = num % 10;
        reverse = reverse * 10 + reminder;
        num = num / 10;
    }    
    if (original == reverse) {
        printf("Palindrome");
    }else {
        printf("Not Palindrome");
    }
    return 0;
}