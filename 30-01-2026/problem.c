#include <stdio.h>

float attendancePercentage(int attended, int total)
{
    return ((float)attended / total) * 100;
}

int main()
{
    int attended, total;
    float percentage;

    scanf("%d", &attended);

    scanf("%d", &total);

    percentage = attendancePercentage(attended, total);

    printf("%.2f%%", percentage);

    return 0;
}
