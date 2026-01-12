#include <stdio.h>
#include <string.h>

int main() {
    int i=0,j=0;  
    char str[100],word[50],longest[50];

    gets(str);

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';
            if (strlen(word) > strlen(longest))
                  strcpy(longest,word);
                  j=0;
            if (str[i] == '\0')
              break;
        }else {
            word[j++] = str[i];
        }
        i++;
    }  

    printf("%s",longest);
    return 0;
}