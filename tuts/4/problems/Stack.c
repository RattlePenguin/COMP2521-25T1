// Implementation of the Stack ADT using a linked list

// !!! DO NOT MODIFY THIS FILE !!!

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "Stack.h"

struct stack {
	struct node *head;
	int size;
};

struct node {
	Item item;
	struct node *next;
};

static struct node *newNode(Item it);

Stack StackNew(void) {
	Stack s = malloc(sizeof(*s));
	if (s == NULL) {
		fprintf(stderr, "error: out of memory\n");
		exit(EXIT_FAILURE);
	}

	s->head = NULL;
	s->size = 0;
	return s;
}

void StackFree(Stack s) {
	struct node *curr = s->head;
	while (curr != NULL) {
		struct node *temp = curr;
		curr = curr->next;
		free(temp);
	}
	free(s);
}

void StackPush(Stack s, Item item) {
	struct node *n = newNode(item);
	n->next = s->head;
	s->head = n;
	s->size++;
}

static struct node *newNode(Item item) {
	struct node *n = malloc(sizeof(*n));
	if (n == NULL) {
		fprintf(stderr, "error: out of memory\n");
		exit(EXIT_FAILURE);
	}

	n->item = item;
	n->next = NULL;
	return n;
}

Item StackPop(Stack s) {
	if (s->size == 0) {
		fprintf(stderr, "error: stack is empty\n");
		exit(EXIT_FAILURE);
	}

	struct node *newHead = s->head->next;
	Item item = s->head->item;

	free(s->head);
	s->head = newHead;
	s->size--;

	return item;
}

Item StackTop(Stack s) {
	if (s->size == 0) {
		fprintf(stderr, "error: stack is empty\n");
		exit(EXIT_FAILURE);
	}

	return s->head->item;
}

int StackSize(Stack s) {
	return s->size;
}

bool StackIsEmpty(Stack s) {
	return s->size == 0;
}

