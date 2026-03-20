#include <stdio.h>
int main() {
    int n, i = 1, sum = 0;

    scanf("%d",&n);

    while(i <= n) {
        if(i % 2 != 0) {
            sum = sum + i;
        }
        i++;
    }

    printf("%d\n",sum);

    int j = 1, add = 0;

    while(j <= n) {
        if (j % 2 == 0) {
             add = add + j;

        }
        j++;
    }

    printf("%d",add);

    return 0;
}
