#include <stdio.h>
int main() { 
    int n,rem;
    int count = 0;

    scanf("%d",&n);

    for (;n != 0; n = n / 10) {
        rem = n % 10;
        if (rem % 2 == 0) {
            count++;
        }
    }

    printf("%d",count);


    return 0;
}
