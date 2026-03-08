#include <stdio.h>

int main()
{
    int capacity, n;
    int items;
    int remaining;
    int overflowDays = 0;
    int overflowFlag = 0;

    scanf("%d", &capacity);
    scanf("%d", &n);

    remaining = capacity;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &items);

        remaining = remaining - items;

        if(remaining < 0 && overflowFlag == 0)
        {
            overflowDays++;
            overflowFlag = 1;
        }
    }

    printf("Remaining Capacity: %d\n", remaining);
    printf("Overflow Days: %d\n", overflowDays);

    return 0;
}
