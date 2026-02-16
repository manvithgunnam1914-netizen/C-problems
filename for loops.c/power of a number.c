#include <stdio.h>
int main() { 
    int n,a;
    int result = 1;

    scanf("%d %d",&n,&a);

    for (int i = 1; i <= a; i++) {
        result = result * n;
    }

    printf("%d",result);


    return 0;
}
