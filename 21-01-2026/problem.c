#include <stdio.h>
#include <string.h>

int main() {
    char filename[100];
    int len;

    scanf("%s",filename);

    len = strlen(filename);

    if (len >= 4 && filename[len-4] == '.' && filename[len-3] == 't' && filename[len-2] == 'x' && filename[len-1] == 't')  { 

        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
