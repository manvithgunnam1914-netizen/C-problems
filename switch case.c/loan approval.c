#include <stdio.h>
int main() { 
    int loanType,creditScore;
    int score = 0;

    scanf("%d %d",&loanType,&creditScore);

    switch(loanType) {
        case 1:
            if (creditScore <= 650 && creditScore >= 699) {
                printf("Manual Review\n");
            } else {
                printf("Approved\n");
            }
            break;
        case 2:
            if (creditScore >= 700) {
                printf("Approved\n");
            } else {
                printf("Rejected\n");
            }
            break;
        default:
                printf("Invalid\n");
            return 0;
    }

    return 0;
}
