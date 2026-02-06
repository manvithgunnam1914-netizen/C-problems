#include <stdio.h>
int main() {
    int a;

    scanf("%d",&a);

    printf("Pre:%d\n",++a);
    printf("Post:%d",a++);
    return 0;
}
