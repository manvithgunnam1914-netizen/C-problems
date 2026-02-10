#include <stdio.h>

int main() {
    int n;
    float data,totalData = 0;
    int highUsageDays = 0;

    scanf("%d",&n);


    for (int i = 1; i <= n; i++) {
        scanf("%f", &data);
        totalData = totalData + data;

        if (data > 2.0) {
            highUsageDays++;
        }
    }

    printf("%.2f\n",totalData);
    printf("%d",highUsageDays);

    return 0;
}
