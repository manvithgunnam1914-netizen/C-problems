#include <stdio.h>
int main() {
    int n, calls_per_hour = 0;
    int total_calls = 0, overloaded_hours = 0;

    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        scanf("%d",&calls_per_hour);
        total_calls = total_calls + calls_per_hour;

        if (calls_per_hour >= 40) {
            overloaded_hours++;
        }
    }
    printf("Total Calls: %d\n",total_calls);
    printf("Overloaded Hours: %d",overloaded_hours);
    
    return 0;
}
