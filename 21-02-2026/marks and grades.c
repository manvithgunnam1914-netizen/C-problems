#include <stdio.h>
int main() { 
    int marks;

    scanf("%d",&marks);

    if (marks <= 100 && marks >= 95) {
        printf("Outstanding\n");
    } else if (marks < 95 && marks >= 90) {
        printf("A\n");
    } else if (marks <= 89 && marks >= 75) {
        printf("B\n");
    } else if (marks <= 74 && marks >= 60) {
        printf("C\n");
    } else if (marks <= 59 && marks >= 40) {
        printf("D\n");
    } else if (marks < 40 && marks >= 0) {
        printf("Fail\n");
    } else {
        printf("Invalid Marks");
    }

    return 0;
}
