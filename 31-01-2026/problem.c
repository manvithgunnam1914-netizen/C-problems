#include <stdio.h>

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int result;

    result = max(10, 20);
    printf("%d\n", result);

    result = max(50, 30);
    printf("%d\n", result);

    result = max(7, 7);
    printf("%d\n", result);

    result = max(-5, 3);
    printf("%d\n", result);

    result = max(100, 90);
    printf("%d\n", result);

    return 0;
}
