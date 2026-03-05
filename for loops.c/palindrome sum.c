#include <stdio.h>
int main() {
    int n, temp, rem;
    int rev, sum = 0;

    scanf("%d",&n);

    for (int i = 1; i < n; i++) {
        temp = i;
        rev = 0;

        for (; temp != 0; temp = temp / 10) {
            rem = temp % 10;
            rev = rev * 10 + rem;
        }
        if (i == rev) {
            sum = sum + i;
        }
    }    
    printf("%d",sum);

    return 0;
}
