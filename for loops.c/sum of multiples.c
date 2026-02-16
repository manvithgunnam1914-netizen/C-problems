#include <stdio.h>
int main() { 
    int n,a;
    int sum = 0;

    scanf("%d %d",&n,&a);

    for (int i = n; i <= a; i = i + n) {
        sum = sum + i;
        printf("%d ",sum);
    }


    return 0;
}
