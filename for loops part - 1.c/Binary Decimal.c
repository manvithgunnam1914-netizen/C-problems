#include <stdio.h>

int main() {
    int binary,decimal = 0,i = 0,remainder;

    scanf("%d", &binary);

    for (; binary != 0; i++) {
        remainder = binary % 10;
        decimal = decimal + remainder * (1 << i);
        binary = binary / 10;
    }

    printf("%d", decimal);

    return 0;
}
