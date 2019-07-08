#include<stdio.h>
#include<string.h>

int main () {
    char one[50] = "marlon";
    char two[50] = "marlon";
    char three[50] = "monzon";

    printf("%d", strcmp(one, two));
    printf("\n");
    printf("%d", strcmp(one, three));

    return(0);
}