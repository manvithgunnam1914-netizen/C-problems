#include <stdio.h>

int main() {
    int totalData;
    scanf("%d",&totalData);

    int n;
    scanf("%d",&n);

    int i = 1;
    int dailyUse;
    int daysUsed = 0;

    while(i <= n) {
        scanf("%d",&dailyUse);

        if(totalData >= dailyUse) {
            totalData = totalData - dailyUse;
            daysUsed++;
        } else {
            break;
        }

        i++;
    }

    printf("%d\n",daysUsed);
    printf("%dGB\n",totalData);

    return 0;
}
