#include <stdio.h>

int main() {
    int a,count = 0;

    scanf("%d",&a);

    while (a > 0) {
        count += (a & 1);  
        a = a >> 1;        
    }

    printf("%d",count);

    return 0;
}
