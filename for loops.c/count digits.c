#include <stdio.h>
int main() { 
    int num;
    int count = 0;

    scanf("%d",&num);

    for (;num != 0; num /= 10) {
        count++;
    }

    printf("%d",count);

    return 0;
}
