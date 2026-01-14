#include <stdio.h>
#include <string.h>


int main() {
    char email[100];
    char domain[] = "@company.com";

    printf("Enter the email");
    scanf("%s", email);

    int len_email = strlen(email);
    int len_domain = strlen(domain);

    if (len_email = len_domain && 
         strcmp(email + len_email - len_domain, domain) == 0) {
            printf("Valid\n");
         }else {
            printf("Invalid\n");
         }


    return 0;
}