#include <stdio.h>
#include <stdlib.h>

// Linked List
struct node {
    int value;
    struct node *next;
};

// Allocates memory for a new empty linked list node, then returns it.
struct node *newNode(int val) {
    struct node *new = malloc(sizeof(*new));
    new->value = val;
    new->next = NULL;
    return new;
}

// Inserts a given node at the end of a given linked list.
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

// Inserts a given node at the end of a given linked list.
struct node *insertNodeWithVal(struct node *head, int val) {
    struct node *new = newNode(val);
    return insertNode(head, new);
}

// Deletes (frees) the node at the head of the linked list. Returns head.
struct node *deleteNodeHead(struct node *head) {
    if (head == NULL) {
        return head;
    }

    struct node *newHead = head->next;
    free(head);
    return newHead;
}

// Deletes (frees) the node at the end of the linked list. Returns head.
struct node *deleteNodeEnd(struct node *head) {
    if (head == NULL) {
        return head;
    } else if (head->next == NULL) {
        free(head);
        return NULL;
    }

    while (head->next != NULL) {
        head = head->next;
    }

    free(head->next);
    head->next = NULL;
    return head;
}

// Frees the entire linked list given its head.
void freeList(struct node *head) {
    while (head != NULL) {
        struct node *toDelete = head;
        head = head->next;
        free(toDelete);
    }
}