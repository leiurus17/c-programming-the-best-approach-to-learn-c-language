#include<stdio.h>
#include<string.h>

int main () {
    char string_one[50] = "marlon";
    char string_two[50] = "pogi";

    printf("%s\n", string_one);
    printf("%s\n", string_two);

    printf("%d\n", strlen(string_one));
    printf("%d\n", strlen(string_two));


    strcpy(string_one, string_two);

    printf("---\n");

    printf("%s\n", string_one);
    printf("%s\n", string_two);

    printf("%d\n", strlen(string_one));
    printf("%d\n", strlen(string_two));

    return(0);
}