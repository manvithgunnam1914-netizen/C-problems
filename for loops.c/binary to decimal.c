#include <stdio.h>
int main() { 
    int binary,rem;
    int decimal = 0;

    scanf("%d",&binary);

    for (int i = 0; binary != 0; i++) {
        rem = binary % 10;
        decimal = decimal + rem * (1 << i);
        binary = binary / 10;
    }

    printf("%d",decimal);

    return 0;
}
