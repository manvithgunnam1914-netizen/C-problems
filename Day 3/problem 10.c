#include <stdio.h>
int main() {
   float temp;
   scanf("%.2f",&temp);
   if (temp > 30) {
      printf("Hot");
   } else {
    printf("Normal");
   }  
    return 0;
}