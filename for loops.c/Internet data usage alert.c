#include <stdio.h>
int main() {
    int n, data;
    int total_data = 0, high_data_usage = 0;

    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        scanf("%d",&data);
        total_data = total_data + data;

        if (data > 2) {
            high_data_usage++;
        }
    }

    printf("Total Data: %d\n",total_data);
    printf("High Usage Days: %d",high_data_usage);

    return 0;
}
