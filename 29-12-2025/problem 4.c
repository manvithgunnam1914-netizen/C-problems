#include <stdio.h>
int main() {
   int marks;
   scanf("%d",&marks);
   if (marks>=85&&marks<=100) {
    printf("Grade A");
   }else if (marks>=65&&marks<85) {
    printf("Grade B");
   }else if (marks>=45&&marks<65) {
    printf("Grade C");
   }else {
    printf("Fail");
   }
    return 0;
}