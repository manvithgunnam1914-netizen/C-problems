#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
    int i,len,valid = 1;
    char username[50];

    printf("Enter the username: ");
    scanf("%s", username);

    len = strlen(username);

    if (len < 6 || len > 12) {
        valid = 0;
    }    

    if (isdigit (username[0])) {
        valid = 0;
    }

    for (i=0;i<len;i++) {
        if (!(islower(username[i]) || isdigit(username[i]))) {
            valid = 0;
            break;
        }
    }

    if (valid) {
        printf("Valid\n");
    }else {
        printf("Invalid\n");
    }

    
    return 0;
}