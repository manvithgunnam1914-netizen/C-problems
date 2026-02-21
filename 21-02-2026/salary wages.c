#include <stdio.h>
int main() { 
    char gender;
    int age,days,salary = 0;

    scanf("%c %d %d",&gender,&age,&days);

    if (gender == 'M' && age >= 18 && age <= 30) {
        salary = days * 700;
    } else if (gender == 'M' && age >= 31 && age <= 40) {
        salary = days * 800;
    } else if (gender == 'F' && age >= 18 && age <= 30) {
        salary = days * 750;
    } else if (gender == 'F' && age >= 31 && age <= 40) {
        salary = days * 850;
    } else {
        printf("Invalid Input");
    }

    printf("%d",salary);

    return 0;
}
