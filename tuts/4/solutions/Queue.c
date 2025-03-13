#include "Stack.h"
#include "Queue.h"

struct queue {
	Stack s1;
	Stack s2;
};

Queue QueueNew(void) {
	Queue q = malloc(sizeof(struct queue));
	q->s1 = StackNew();
	q->s2 = StackNew();
	return q;
}

void QueueFree(Queue q) {
	StackFree(q->s1);
	StackFree(q->s2);
	free(q);
}

void QueueEnqueue(Queue q, Item item) {
	StackPush(q->s1, item);
}

Item QueueDequeue(Queue q) {
    // My initial implementation O(2n)
    /*
	while (StackSize(q->s1) > 0) {
        StackPush(q->s2, StackPop(q->s1));
    }

    int myItem = StackPop(q->s2);

    while (StackSize(q->s1) > 0) {
        StackPush(q->s2, StackPop(q->s1));
    }
    */
    
    // Ideal implementation O(n)
    if (StackSize(q->s2) == 0) {
        while (StackSize(q->s1) > 0) {
            StackPush(q->s2, StackPop(q->s2));
        }
    }

    return StackPop(q->s2);
}