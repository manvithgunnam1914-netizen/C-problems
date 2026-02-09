#include <stdio.h>
int main() {
    int n,a,i;
    int result = 1;

    scanf("%d %d",&n,&a);

    for (i = 1; i <= a; i++) {
        result = result * n;
    }
    printf("%d",result);

    return 0;
}
