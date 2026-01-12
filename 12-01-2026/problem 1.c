#include <stdio.h>
#include <string.h>

int main() {
    int count1[256]={0},count2[256]={0},i;
    char str1[50],str2[50];

    gets(str1);
    gets(str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not Anagram");
        return 0;
    }

    for (i=0;str1[i] != '\0';i++) {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }

    for(i=0;i<256;i++) {
        if (count1[i] != count2[i]) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}