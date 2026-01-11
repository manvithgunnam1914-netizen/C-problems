#include <stdio.h>
int main() {
    int n,i,j,count=1;
    int a[100],b[100] = {0};

    scanf("%d",&n);

    for (i=0;i<n;i++) {
        scanf("%d",&a[i]);
    } 
    for (i=0;i<n;i++) {
        if (b[i] == 1)
        continue;
    

    count = 1;
    for (j=i+1;j<n;j++) {
        if (a[i] == a[j]) {
            count++;
            b[j] = 1;
        }
    }
    printf("%d - %d\n",a[i],count);
     }
    return 0;
}