#include "List.c"
struct node *newNode(int val);
struct node *insertNode(struct node *head, struct node *new);
struct node *insertNodeWithVal(struct node *head, int val);
struct node *deleteNodeHead(struct node *head);
struct node *deleteNodeEnd(struct node *head);
void freeList(struct node *head);