#include <stdio.h>

#include "List.h"

struct node *shift(struct node *list);

int main(void) {
    struct node *list = newNode(5);
    insertNodeWithVal(list, 10);
    insertNodeWithVal(list, 15);

    list = shift(list);
    struct node *curr = list;
    while (curr != NULL) {
        printf("%d\n", curr->value);
        curr = curr->next;
    }

    freeList(list);
    return 0;
}

// Shifts a given linked list to the right by 1 node.
struct node *shift(struct node *list) {
    if (list == NULL || list->next == NULL) {
        return list;
    }

    struct node *curr = list;
    while (curr->next->next != NULL) {
        curr = curr->next;
    }

    struct node *end = curr->next;
    curr->next = NULL;
    end->next = list;
    list = end;
    return list;
}