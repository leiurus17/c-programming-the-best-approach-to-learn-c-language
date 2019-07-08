#include<stdio.h>
#include<ncurses.h>
#include<stdlib.h>

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
    node *insert(node *p, int n);
    void print(node *p);

    head = (node *) malloc(sizeof(node));

    create(head);

    printf("\n");
    printf("original list : ");
    print(head);
    printf("\n\n");
    printf("input the number to be inserted");

    scanf("%d", &n);

    head = insert(head, n);

    printf("\n");
    printf("new list after insertion : ");
    print(head);

    //getch();

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

node *insert(node *head, int x) {
    node *p1;
    node *p2;
    node *p;

    p1 = NULL;
    p2 = head;

    for (; p2 -> number < x; p2 -> next ) {
        p1 = p2;

        if (p2 -> next == NULL) {
            p2 = p2 -> next;
            break;
        }
    }

    p = (node *) malloc(sizeof(node));
    p -> number = x;
    p -> next = p2;

    if (p1 == NULL) {
        head = p;
    } else {
        p1 -> next = p;

        return head;
    }

   
}

void print(node *list) {
    while(list -> next != 0) {
        printf("%d", list -> number);
        list = list -> next;
    }
}