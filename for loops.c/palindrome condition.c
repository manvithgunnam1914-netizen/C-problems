#include <stdio.h>
int main() {
    int n;
    int rev = 0,rem;

    scanf("%d",&n);

    int temp = n;

    for (;n != 0; n = n / 10) {
        rem = n % 10;
        rev = rev * 10 + rem;
    }
    if (temp == rev) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome");
    }
    
    return 0;
}
