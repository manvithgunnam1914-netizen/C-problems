#include <stdio.h>
int main() {
    char str[100], ch[100];
    int i = 0;

    scanf("%s",str);

    while (str[i] != '\0') {
        ch[i] = str[i];
        i++;
    }    
    ch[i] = '\0';

    printf("%s",ch);
    return 0;
}