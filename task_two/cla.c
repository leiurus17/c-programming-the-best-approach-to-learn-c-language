#include<stdio.h>

void main(int argc, char* argv[]) {

    FILE *fp;
    int i;
    char word[15];

    fp = fopen(argv[1], "w"); // write on the file

    printf("Number of command line arguments = %d", argc);

    for (i = 2; i < argc; i++) {
        
        fprintf(fp, "%s", argv[i]);
    }
}