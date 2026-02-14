#include <stdio.h>

int main()
{
    int N, patients;
    int total = 0;
    int overcrowded = 0;

    scanf("%d", &N);

    for(int i = 1; i <= N; i++)
    {
        scanf("%d", &patients);
        total = total + patients;

        if(patients > 100)
        {
            overcrowded++;
        }
    }

    printf("Total Patients = %d\n", total);
    printf("Overcrowded Days = %d", overcrowded);

    return 0;
}
