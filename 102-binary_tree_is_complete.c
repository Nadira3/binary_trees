#include "binary_trees.h"

/**
 * Write a function that checks if a binary tree is complete
 *
 * Prototype: int binary_tree_is_complete(const binary_tree_t *tree);
 * Where tree is a pointer to the root node of the tree to check
 * If tree is NULL, your function must return 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if (binary_tree_is_full(tree))
		return (binary_tree_is_complete(tree->right) && binary_tree_is_complete(tree->left));
	if (!binary_tree_is_full((binary_tree_t *)tree) && 
			binary_tree_is_full(binary_tree_sibling((binary_tree_t *)tree)))
			return (tree->left ? 1 : 0);
	return (1);
}

