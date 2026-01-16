#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    gets(str);

    str[0] = toupper(str[0]);

    printf("%s",str);
    return 0;
}
