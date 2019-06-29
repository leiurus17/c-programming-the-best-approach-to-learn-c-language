#include<stdio.h>

int main(int argc, char* argv[]) {

    FILE *fp;
    int i;
    char word[15];

    fp = fopen(argv[1], "w"); // write on the file

    printf("Number of command line arguments = %d", argc);

    for (i = 2; i < argc; i++) {
        
        fprintf(fp, "%s", argv[i]);
    }

    fclose(fp); // close the file

    printf("\n\n");

    printf("Contents of the %s file\n\n", argv[1]);
    fp = fopen(argv[1], "r");

    for (i = 2; i < argc; i++) {
        fscanf(fp, "%s", word);
        printf("%s", word);
    }

    for (i = 0; i < argc; i++) {
        printf("%s", argv[i]);
    }

    fclose(fp); //do not forget to close the file

    return (0);
}