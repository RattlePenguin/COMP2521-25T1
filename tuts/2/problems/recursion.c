#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int value;
    struct node *next;
};

struct node *newNode(int value);
struct node *listAppend(struct node *list, int value);
void printList(struct node *list);
void listFree(struct node *list);

// TODO
int listLength(struct node *l);
int listCountOdds(struct node *l);
bool listIsSorted(struct node *l);
struct node *listDelete(struct node *l, int value);

int main(int argc, char *argv[]) {
    // Create my list
    struct node *list = NULL;
    for (int i = 0; i < 10; ++i) {
        list = listAppend(list, i);
    }

    printList(list);
    // printf("%d\n", listLength(list));
    // printf("%d\n", listCountOdds(list));
    // printf("%d\n", listIsSorted(list));
    // listDelete(list, 5);
    // printList(list);
    
    listFree(list);
    return 0;
}

int listLength(struct node *l){
    return 0;
}

int listCountOdds(struct node *l){
    return 0;
}

bool listIsSorted(struct node *l){
    return false;
}

struct node *listDelete(struct node *l, int value){
    return NULL;
}


// Creates a new node with a value
struct node *newNode(int value) {
    struct node *new = malloc(sizeof(struct node));
    new->value = value;
    new->next = NULL;
    return new;
}

// Creates a new node with a value and appends it to list. Returns head of list
struct node *listAppend(struct node *list, int value) {
    struct node *new = newNode(value);

    // List is empty
    if (list == NULL) {
        return new;
    }

    // List is not empty
    struct node *curr = list;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    // curr->next is NULL
    curr->next = new;

    // return head
    return list;
}

// Prints all values in a linked list
void printList(struct node *list) {
    printf("%d", list->value);
    list = list->next;
    while (list != NULL) {
        printf(" - %d", list->value);
        list = list->next;
    }

    printf("\n");
}

// Frees a linked list given its head
void listFree(struct node *list) {
    if (list == NULL) {
        return;
    }
    listFree(list->next);
    free(list);
}