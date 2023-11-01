#include "binary_trees.h"

/**
 * Write a function that checks if a binary tree is full
 *
 * Prototype: int binary_tree_is_full(const binary_tree_t *tree);
 * Where tree is a pointer to the root node of the tree to check
 * If tree is NULL, your function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree || (tree && (!tree->left || !tree->right)))
		return (0);
	if (tree)
	{
		binary_tree_is_full(tree->left);
		binary_tree_is_full(tree->right);
	}
	return (1);
}
