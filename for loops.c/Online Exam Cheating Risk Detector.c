#include <stdio.h>
int main() {
    int n, risk_scores = 0;
    int total_risk = 0, high_risk_sessions = 0;

    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        scanf("%d",&risk_scores);
        total_risk = total_risk + risk_scores;

        if (risk_scores >= 50) {
            high_risk_sessions++;
        }
    }

    printf("Total Risk: %d\n",total_risk);
    printf("High Risk Sessions: %d",high_risk_sessions);

    return 0;
}
