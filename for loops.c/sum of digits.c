#include <stdio.h>
int main() { 
    int n,rem;
    int sum = 0;

    scanf("%d",&n);

    for (; n != 0; n = n / 10) {
        rem = n % 10;
        sum = sum + rem;
    }

    printf("%d",sum);


    return 0;
}
