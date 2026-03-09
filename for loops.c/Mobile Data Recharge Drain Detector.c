#include <stdio.h>

int main() {
    int totalData, N;
    
    scanf("%d", &totalData);
    scanf("%d", &N);

    int usage[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &usage[i]);
    }

    int successfulDays = 0;

    for(int i = 0; i < N; i++) {
        if(totalData >= usage[i]) {
            totalData = totalData - usage[i];
            successfulDays++;
        } 
        else {
            break;
        }
    }

    printf("Remaining Data: %d\n", totalData);
    printf("Successful Days: %d", successfulDays);

    return 0;
}
