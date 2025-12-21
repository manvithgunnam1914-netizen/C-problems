#include <stdio.h>
int main() {
    int marks;
    scanf("%d",&marks);
    if (marks >= 35 && marks <= 100) {
        printf("Pass");
    }else if (marks >= 30) {
        printf("grace pass");
    }else {
        printf("Fail");
    }
    return 0;
}