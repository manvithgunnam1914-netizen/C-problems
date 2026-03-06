#include <stdio.h>
int main() {
    int n, errors;
    int total_errors = 0, Critical_hours = 0;

    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        scanf("%d",&errors);
        total_errors = total_errors + errors;

        if (errors > 50) {
            Critical_hours++;
        }
    }

    printf("Total Errors: %d\n",total_errors);
    printf("Critical Hours: %d",Critical_hours);

    return 0;
}
