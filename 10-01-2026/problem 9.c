#include <stdio.h>
#include <math.h>

int main() {
    int binary,digit,i=0,decimal=0;
    scanf("%d",&binary);

    while (binary != 0) {
        digit = binary % 10;
        decimal += digit * pow(2,i);
        binary /= 10;
        i++;
    }    

    printf("%d",decimal);
    return 0;
}