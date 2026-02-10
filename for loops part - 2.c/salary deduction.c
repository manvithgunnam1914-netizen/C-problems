
#include <stdio.h>

int main() {
    int salary, absentDays;
    int deduction, finalSalary;

    scanf("%d",&salary);

    scanf("%d",&absentDays);

    deduction = absentDays * 100;
    finalSalary = salary - deduction;

    printf("%d", finalSalary);

    return 0;
}
