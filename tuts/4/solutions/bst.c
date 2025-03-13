#include <stdio.h>
#include "Tree.h"

int bstNumNodes(struct node *t);
int bstCountOdds(struct node *t);
int bstCountInternal(struct node *t);
int bstHeight(struct node *t);
int bstNodeLevel(struct node *t, int key);
int bstCountGreater(struct node *t, int val);

int main(void) {
	struct node *tree = NULL;
	tree = TreeInsert(tree, 4);
	tree = TreeInsert(tree, 2);
	tree = TreeInsert(tree, 6);
	tree = TreeInsert(tree, 1);
	tree = TreeInsert(tree, 3);
	tree = TreeInsert(tree, 5);
	tree = TreeInsert(tree, 7);
	TreePreOrder(tree);

	return 0;
}

// Write a recursive function to count the total number of nodes in a tree.
int bstNumNodes(struct node *t) {
	if (t == NULL) {
		return 0;
	} else {
		return 1 + bstNumNodes(t->left) + bstNumNodes(t->right);
	}
}

// Implement the following function that counts the number of odd values in a tree.
int bstCountOdds(struct node *t) {
	if (t == NULL) {
		return 0;
	} else if (t->value % 2 != 0) {
		return 1 + bstCountOdds(t->left) + bstCountOdds(t->right);
	} else {
		return bstCountOdds(t->left) + bstCountOdds(t->right);
	}
}

// Implement the following function to count number of internal nodes in a given tree.
int bstCountInternal(struct node *t) {
	if (t == NULL) {
		return 0;
	} else if (t->left == NULL && t->right == NULL) {
		return 0;
	} else {
		return 1 + bstCountInternal(t->left) + bstCountInternal(t->right);
	}
}

// Write a recursive function to compute the height of a tree.
// The height of a tree is defined as the length of the longest path from the root to a leaf.
// The path length is a count of the number of links (edges) on the path.
// The height of an empty tree is -1.
int bstHeight(struct node *t) {
	if (t == NULL) {
		return -1;
	} else {
		int lh = bstHeight(t->left);
		int rh = bstHeight(t->right);
		if (lh > rh) {
			return lh + 1;
		} else {
			return rh + 1;
		}
	}
}

// Implement the following function that returns the level of the node
// containing a given key if such a node exists, otherwise the function
// returns -1 (when a given key is not in the binary search tree).
// The level of the root node is zero.
int bstNodeLevel(struct node *t, int key) {
	// Recursive Solution
	if (t == NULL) {
		return -1;
	} else if (t->value == key) {
		return 0;
	} else if (key < t->value) {
		int level = bstNodeLevel(t->left, key);
		if (level == -1) return -1;
		return level + 1;
	} else {
		int level = bstNodeLevel(t->right, key);
		if (level == -1) return -1;
		return level + 1;
	}

    // Iterative Solution
    /*
    int level = 0;
	struct node *curr = t;

	while (curr != NULL) {
		if (curr->value == key) {
			return level;
		} else if (key < curr->value) {
			curr = curr->left;
		} else {
			curr = curr->right;
		}
		
		level++;
	}

	return -1;
    */
}

// Implement the following function that counts the number of values that are greater than a given value.
// This function should access as few nodes as possible.
int bstCountGreater(struct node *t, int val) {
	if (t == NULL) {
		return 0;
	} else if (t->value > val) {
		return 1 + bstCountGreater(t->left, val) + bstCountGreater(t->right, val);
	} else {
		return bstCountGreater(t->right, val);
	}
}
