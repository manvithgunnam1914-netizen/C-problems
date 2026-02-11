#include <stdio.h>
int main() {
    int marks;

    scanf("%d",&marks);

    switch(marks / 10) {
        case 10:
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        case 5:
            printf("E");
            break;
        case 4:
            printf("F");
            break;
        case 3:
            if (marks >= 30) {
            printf("Supplementay");
            } else {
                printf("Fail");
            }
            break;

        default:
        printf("Fail");
        
    }

    return 0;
}
