#include <stdio.h>
int main() {
    char str[50],ch[50];
    int i = 0, flag = 1;

    scanf("%s %s",str,ch);

    while (str[i] != '\0'||ch[i] != '\0') {
        if (str[i] != ch[i]) {
            flag = 0;
            break;
        }
        i++;
    }

    if (flag == 1) {
    printf("Equal");
    }else {
        printf("Not Equal");
    }
    return 0;
}