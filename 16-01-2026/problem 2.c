#include <stdio.h>

int main() {
    char str[100];
    int i,j,flag = 0;

    gets(str);

    for(i=0;str[i] != '\0';i++) {
        for(j=i+1;str[j] != '\0';j++) {
            if(str[i] == str[j]) {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            break;
    }

    if(flag == 1)
        printf("Duplicates found");
    else
        printf("No duplicates");

    return 0;
}
