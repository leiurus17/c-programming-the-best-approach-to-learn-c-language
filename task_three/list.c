#include<stdio.h>
#include<ncurses.h>

#define NULL 0

struct linked_list {
    int number;
    struct linked_list *next;   
};

typedef struct linked_list node;

int main () {
    int n;
    node *head;

    void create(node *p);
    node insert(node *p, int n);
    void print(node *p);

    head = (node *) malloc(sizeof(node));

    create(head);

    printf("\n");
    printf("original list : ");
    printf(head);
    printf("\n\n");
    print("input the number to be inserted");

    scanf("%d", &n);

    // head = insert(*head, n); // TODO

    printf("\n");
    printf("new list after insertion : ");
    printf(head);

    getch();

    return(0);
}

void create(node *list) {
    printf("input a number : \n");
    printf("type -999 at the end");
    scanf("%d", list -> number);

    if (list -> number == -999) {
        list -> next = NULL;
    } else {
        list -> next = (node *) malloc(sizeof(node));
        create(list -> next);
    }
}

node insert(node *p, int n) {
}

void print(node *p) {
}