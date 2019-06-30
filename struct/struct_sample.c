#include<stdio.h>

struct person {
    char first_name[30];
    char last_name[30];
    char person_id[10];
};

int main() {
    struct person p1 = {"Marlon", "Monzon", "00112233"};
    struct person p2 = {"Chris", "Carrabba", "00112234"};

    printf("Name Person 1: %s %s\n", p1.first_name, p1.last_name);
    printf("ID of Person 1: %s\n", p1.person_id);

    printf("\n");

    printf("Name Person 2: %s %s\n", p2.first_name, p2.last_name);
    printf("ID of Person 2: %s\n", p2.person_id);

    return(0);
}