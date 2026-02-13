#include <stdio.h>
int main() { 

    int callType,min;
    int charges = 0;
    
    scanf("%d %d",&callType,&min);

    switch(callType) {
        case 1:
            charges = 1;
        break;
      
        case 2:
            charges = 3;
        break;
      
        case 3:
            charges = 10;
        break;
      
        default:
            printf("Invallid\n");
        break;
    }

    charges = charges * min;

    printf("%d",charges);


    return 0;
}
