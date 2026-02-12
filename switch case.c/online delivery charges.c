#include <stdio.h>
int main() { 

   int amount,type;
   int delivery_charge = 0;

   scanf("%d %d",&type,&amount);

   switch(type) {
      case 1:
      delivery_charge = 50;
      break;

      case 2:
      if (amount < 1000) {
         delivery_charge = 100;
      } else {
         delivery_charge = 0;
      }

      default:
      printf("Invalid");
      return 0;
   }
   

   printf("%d",delivery_charge);


   return 0;
}
