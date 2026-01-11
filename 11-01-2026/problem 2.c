#include <stdio.h>
#include <string.h>

int main() {
    char str[100],ch[50];
    char smallest[50],largest[50];
    int i=0,j=0;

    gets(str);

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            ch[j] = '\0';

            if (strlen(ch) > 0) {
                if (strlen(largest) == 0 || strlen(ch) > strlen(largest)) {
                    strcpy(largest,ch);
                }if (strlen(smallest) == 0 || strlen(ch) < strlen(smallest)) {
                    strcpy(smallest,ch);
                }
            }
            j = 0;
        }else {
            ch[j++] = str[i];
        }

        if (str[i] == '\0')
            break;
            i++;
    }    

    printf("Largest: %s\nSmallest: %s",largest,smallest);

    return 0;
}