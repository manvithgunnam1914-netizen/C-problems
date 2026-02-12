#include <stdio.h>
int main() { 
    int attempt,marks;

    scanf("%d %d",&attempt,&marks);

    switch(attempt) {
        case 1:
            if (marks >= 80 && marks <= 100) {
                printf("Excellent\n");
            } else {
                printf("Not Qualified\n");
            }
        break;
        case 2:
            if (marks >= 60 && marks <= 100) {
                printf("Good\n");
            } else {
                printf("Not Qualified\n");
            }
        break;
        case 3:
            if (marks <= 100 && marks >= 0) {
            printf("Needs Improvement\n");
            }
        break;
        default:
            printf("Invalid\n");
    }

    return 0;
}
