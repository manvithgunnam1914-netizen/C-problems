#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i,count = 0,inWord = 0;

    gets(str);  

    for(i = 0;str[i] != '\0';i++) {
        if(isalpha(str[i])) {
            if(inWord == 0) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    printf("%d",count);
    return 0;
}
