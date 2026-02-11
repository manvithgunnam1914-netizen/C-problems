#include <stdio.h>
int main() {
    int i,j,num;

    for (i = 1; i <= 5; i++) {
        if (i % 2 == 1){
            num = 1;
        } else {
            num = 0;
        }
    
    for (j = 1; j <= i; j++) {

        printf("%d ",num);

        if (num == 1) {
            num = 0;
        } else {
            num = 1;
        }
    }
    printf("\n");
    }


    return 0;
}
