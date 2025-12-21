#include <stdio.h>
int main() {
   int salary,bonus;
   scanf("%d",&salary);
   if (salary>=20000) {
      salary = salary + 2000;
      printf("%d",salary); 
   }else if (salary<20000) {
      salary = salary + 1000;
      printf("%d",salary);
   }
    return 0;
}