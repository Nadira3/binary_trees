#include "binary_trees.h"

/**
 * bst_search - searches for a value in a Binary Search Tree
 *
 * Prototype: bst_t *bst_search(const bst_t *tree, int value);
 * @tree: is a pointer to the root node of the BST to search
 * @value: is the value to search in the tree
 * Return: a pointer to the node containing a value equals to value
 * If tree is NULL or if nothing is found, your function must return NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree || value == tree->n)
		return ((bst_t *)tree);
	if  (value < tree->n)
		return (bst_search(tree->left, value));
	else
		return (bst_search(tree->right, value));
	return ((bst_t *)tree);
}
