#include <stdio.h>
int main() {
   int exp,bonus;
   scanf("%d",&exp);
   if (exp>=5) {
    bonus += 5000;
    printf("%d",bonus);
   }else {
    bonus += 2000;
    printf("%d",bonus);
   }
    return 0;
}