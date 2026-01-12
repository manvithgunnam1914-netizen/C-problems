#include <stdio.h>
#include <string.h>

int main() {
    int i,j;
    char str[50],temp;

    gets(str);

    for (i=0;i<strlen(str);i++) {
        for (j=i+1;j<strlen(str);j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("%s",str);
    return 0;
}