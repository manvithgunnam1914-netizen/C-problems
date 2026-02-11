#include <stdio.h>

int main() {
    int marks,attendance;

    scanf("%d %d",&marks,&attendance);


    if(attendance < 75) {
        printf("Fail\n");
    }
    else {
        if(marks >= 75) {
            printf("Distinction\n");
        }
        else if(marks >= 50) {
            printf("Pass\n");
        }
        else {
            printf("Fail\n");
        }
    }

    return 0;
}
