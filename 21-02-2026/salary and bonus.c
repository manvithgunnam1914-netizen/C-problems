#include <stdio.h>

int main()
{
    char gender;
    int experience;
    float salary, bonusPercent = 0, bonusAmount, finalSalary;

    scanf("%c %d %f",&gender,&experience,&salary);

    if (experience < 5)
        bonusPercent = 5;
    else if (experience >= 5 && experience <= 10)
        bonusPercent = 10;
    else
        bonusPercent = 15;

    if (gender == 'F' || gender == 'f')
        bonusPercent += 2;

    if (salary > 10000)
        bonusPercent -= 3;

    bonusAmount = (bonusPercent / 100) * salary;
    finalSalary = salary + bonusAmount;

    printf("%.2f%%\n", bonusPercent);
    printf("%.2f\n", bonusAmount);
    printf("%.2f\n", finalSalary);

    return 0;
}
