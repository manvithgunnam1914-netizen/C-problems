#include <stdio.h>
int main() {
    int n;
    int sum = 0;
    int add = 0;

    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
    }
    printf("%d\n",sum);

    for (int j = 1; j <= n; j++) {
        if (j % 2 != 0) {
            add = add + j;
        }
    }
    printf("%d",add);

    return 0;
}
