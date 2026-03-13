#include <stdio.h>
int main() {
    int i, j;
    char ch;

    for(i = 0; i < 5; i++) {
        ch = 'E' - i;   
        for(j = ch; j <= 'E'; j++) {
            printf("%c ", j);
        }
        printf("\n");
    }

    return 0;
}
