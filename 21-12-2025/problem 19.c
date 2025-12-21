#include <stdio.h>
int main() {
   int attend;
   scanf("%d",&attend);
   if (attend >= 75 && attend <= 100) {
    printf("Allowed");
   }else {
    printf("Not Allowed");
   }
    return 0;
}