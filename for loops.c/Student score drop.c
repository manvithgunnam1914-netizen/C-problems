#include <stdio.h>
int main() {
    int n, marks;
    int avg_marks, failed_subjects = 0, total_marks = 0;

    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        scanf("%d",&marks);
        total_marks = total_marks + marks;

        if (marks < 40) {
            failed_subjects++;
        }
    }

    avg_marks = total_marks / n;

    printf("%d\n",avg_marks);
    printf("%d",failed_subjects);

    return 0;
}
