#include <stdio.h>
int main() {
    int n, salary;
    int deduction, finalSalary;

    scanf("%d %d",&salary, &n);

    deduction = n * 100;
    finalSalary = salary - deduction;

    printf("%d",finalSalary);

    return 0;
}
