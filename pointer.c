#include<stdio.h>

int main() {

    int item = 19;
    int n;

    int *p; // pointer

    printf("Zero: %d\n", *p);

    printf("First: %d\n", p); // What is this value?

    p = & item;

    printf("Second: %d\n", p);

    printf("Third: %d\n", n);

    n = *p;

    printf("Fourth: %d\n", n);

    return(0);
}