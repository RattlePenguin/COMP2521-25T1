#include <stdio.h>
#include <stdlib.h>

#include "List.h"

int main(void) {
    struct node *list = newNode(5);
    insertNodeWithVal(list, 10);
    insertNodeWithVal(list, 15);

    struct node *curr = list;
    while (curr != NULL) {
        printf("%d\n", curr->value);
        curr = curr->next;
    }

    freeList(list);
    return 0;
}

// Initialises an array of variable length n, and prints it.
void wvla(void) {
    int n = 5;
    int a[n];

    for (int i = 0; i < n; ++i) {
        a[i] = i;
        printf("%d", a[i]);
    }
    printf("\n");
}