#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d",&a,&b,&c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Triangle is Valid\n");

        if (a == b && b == c)
            printf("Equilateral Triangle");
        else if (a == b || b == c || a == c)
            printf("Isosceles Triangle");
        else
            printf("Scalene Triangle");
    } 
    else {
        printf("Triangle is Invalid");
    }

    return 0;
}
