#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a Binary Search Tree
 *
 * Prototype: bst_t *bst_insert(bst_t **tree, int value);
 * @tree: is a double pointer to the root node of the BST to insert the value
 * @value: is the value to store in the node to be inserted
 * Return: a pointer to the created node, or NULL on failure
 * If the address stored in tree is NULL,
 *	the created node must become the root node.
 * If the value is already present in the tree, it must be ignored
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *ptr = NULL, *root = tree ? *tree : NULL;
	bst_t *node = NULL;

	while (root)
	{
		ptr = root;
		if (value == root->n)
			return (NULL);
		if (value < root->n)
			root = root->left;
		else
			root = root->right;
	}
	node = binary_tree_node(ptr, value);
	if (!ptr)
		*tree = node;
	else if (value < ptr->n)
		ptr->left = node;
	else
		ptr->right = node;
	return (node);
}
