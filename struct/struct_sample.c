#include<stdio.h>

struct person {
    char first_name[30];
    char last_name[30];
    char person_id[10];
};

int main() {
    void display_person_one();
    void display_person_two();

    display_person_one();

    printf("\n");

    display_person_two();
    

    return(0);
}

void display_person_one() {
    struct person p1 = {"Marlon", "Monzon", "00112233"};

    printf("Name Person 1: %s %s\n", p1.first_name, p1.last_name);
    printf("ID of Person 1: %s\n", p1.person_id);
}

void display_person_two() {
    struct person p2 = {"Chris", "Carrabba", "00112234"};

    printf("Name Person 2: %s %s\n", p2.first_name, p2.last_name);
    printf("ID of Person 2: %s\n", p2.person_id);
}