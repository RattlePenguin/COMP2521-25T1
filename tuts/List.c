#include <stdio.h>

struct node {
    int value;
    struct node *next;
};

struct node *newNode(int val) {
    struct node *new = malloc(sizeof(*new));
    new->value = val;
    new->next = NULL;
    return new;
}

struct node *insertNode(struct node *head, struct node *new) {
    if (head == NULL) {
        return new;
    }
    
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    
    curr->next = new;
    return head;
}