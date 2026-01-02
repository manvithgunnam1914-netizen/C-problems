#include <stdio.h>
int main() {
   char str[100];
   int i, ch=0;

   scanf("%s",str);

   while (str[ch] != '\0') {
    ch++;
   }    

   for(i = ch - 1;i >= 0;i--) {
    printf("%c",str[i]);
   }
    return 0;
}