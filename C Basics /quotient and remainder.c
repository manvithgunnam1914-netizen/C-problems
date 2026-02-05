#include <stdio.h>
int main() {
    int a,b,div,rem;
    scanf("%d %d",&a,&b);
    div = a / b;
    rem = a % b;

    printf("Quotient = %d\n",div);
    printf("Remainder = %d",rem);    
    return 0;
}
