#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int rev = 0, rem, temp;
    int sum = 0;

    scanf("%d",&n);

    temp = n;

    for (; n != 0; n = n / 10) {
        rev++;
    }

    n = temp;

    for (; n != 0; n = n / 10) {
        rem = n % 10;
        sum = sum + pow(rem , rev);
    }

    if (sum == temp) {
        printf("Yes\n");
    } else {
        printf("No");
    }

    return 0;
}
