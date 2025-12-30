#include <stdio.h>
int main() {
   int i,n;
   int product = 1;
   scanf("%d",&n);
   for (i=1;i<=n;i++) {
    product = product * i;
   }    
   printf("%d",product);
    return 0;
}