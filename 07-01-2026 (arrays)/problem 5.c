#include <stdio.h>
int main() {
    int n,i,a[100]; 
    float sum=0,avg;

    scanf("%d",&n);

    for (i=0;i<n;i++) {
        scanf("%d",&a[i]);
        sum+=a[i];
    }

    avg = sum/n;
    printf("%.0f",avg);
    return 0;
}