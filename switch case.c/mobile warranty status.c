#include <stdio.h>
int main() {
    int warrantyCategory;

    scanf("%d",&warrantyCategory);

    switch(warrantyCategory) {
        case 1:
            printf("Under Warranty\n");
        break;

        case 2:
            printf("Limited Warranty\n");   
        break;

        case 3:
            printf("Out of Warranty\n");
        break;

        default:
            printf("Invallid\n");
        break;

    }

    return 0;
}
