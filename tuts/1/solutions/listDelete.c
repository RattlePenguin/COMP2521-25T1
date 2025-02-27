#include <stdio.h>
#include <stdlib.h>

// Representation 1
struct node {
    int value;
    struct node *next;
};

// Representation 2
struct list {
    struct node *head;
};

// Function Prototypes
void listPrint(struct node *list);
struct node *listDelete(struct node *list);
void listDeleteAlt(struct list *list);

int main(void) {
    struct list *list = malloc(sizeof(struct list));
    
    struct node *head = calloc(1, sizeof(struct node));
    struct node *curr = head;
    for (int i = 1; i < 4; ++i) {
        struct node *new = calloc(1, sizeof(struct node));
        new->value = i;
        curr->next = new;
        curr = curr->next;
    }
    list->head = head;

    // "list" is representation 2, with list->head pointing to "head".
    // "head" is the head node of the linked list.
    // list->head -> 0(head) -> 1 -> 2 -> 3

    listPrint(head);
}

// Prints the elements of a linked list in order.
void listPrint(struct node *list) {
    while (list != NULL) {
        printf("%d\n", list->value);
        list = list->next;
    }
}

// Deletes the first element in a linked list.
struct node *listDelete(struct node *list) {
    return NULL;
}

// Deletes the first element in a linked list.
void listDeleteAlt(struct list *list) {
    return;
}