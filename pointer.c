#include<stdio.h>

int main() {

    int item = 19;
    int n;

    int *p; // pointer

    printf("Zero: %d\n", *p); // What is this value?

    printf("First: %d\n", p); // What is this value?

    p = & item; // p now holds the address of the memory containing the value of item variable

    printf("Second: %d\n", p); // Is this the address?

    printf("Third: %d\n", n); // What is this value? The size of int?

    n = *p;

    printf("Fourth: %d\n", n); // The value of item is now copied on n

    printf("Fifth: %d\n", item);

    return(0);
}