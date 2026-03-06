#include <stdio.h>
int main() {
    int n, loss;
    int total_loss = 0, high_loss = 0;

    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        scanf("%d",&loss);
        total_loss = total_loss + loss;

        if (loss > 100) {
            high_loss++;
        }
    }

    printf("%d\n",total_loss);
    printf("%d",high_loss);

    return 0;
}
