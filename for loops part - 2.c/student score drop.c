#include <stdio.h>

int main() {
    int n,score;
    int total = 0,failCount = 0;
    float average;

    scanf("%d",&n);


    for (int i = 1; i <= n; i++) {
        scanf("%d", &score);
        total = total + score;

        if (score < 40) {
            failCount++;
        }
    }

    average = (float) total / n;

    printf("%.2f\n",average);
    printf("%d",failCount);

    return 0;
}
