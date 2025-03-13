#include <stdio.h>
#include <stdlib.h>

#include "Tree.h"

// Mallocs a new node.
struct node *NewNode(int value) {
    struct node *new = calloc(sizeof(struct node), 1);
    new->value = value;
    return new;
}

// Inserts a value into a tree.
struct node *TreeInsert(struct node *tree, int value) {
    if (tree == NULL) {
        tree = NewNode(value);
        return tree;
    }
    if (tree->value < value) {
        tree->right = TreeInsert(tree->right, value);
    } else if (tree->value > value) {
        tree->left = TreeInsert(tree->left, value);
    }
    return tree;
}

// Prints the values of the given tree via pre-order traversal.
void TreePreOrder(struct node *tree) {
    if (tree == NULL) {
        return;
    }
    printf("%d ", tree->value);
    TreePreOrder(tree->left);
    TreePreOrder(tree->right);
}