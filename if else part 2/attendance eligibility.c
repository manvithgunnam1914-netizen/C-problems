#include <stdio.h>
int main() {
    int attendence;

    scanf("%d",&attendence);

    if (attendence >= 75) {
        printf("Eligible for exam");
    } else {
        printf("Not Eligible");
    }

    return 0;
}
