struct node {
	int value;
	struct node *left;
	struct node *right;
};

// Inserts a value into a tree.
struct node *TreeInsert(struct node *tree, int value);

// Prints the values of the given tree via pre-order traversal.
void TreePreOrder(struct node *tree);