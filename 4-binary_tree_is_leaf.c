#include "binary_trees.h"

/**
 * Write a function that checks if a node is a leaf
 *
 * Prototype: int binary_tree_is_leaf(const binary_tree_t *node);
 * Where node is a pointer to the node to check
 * Your function must return 1 if node is a leaf, otherwise 0
 * If node is NULL, return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	int result = 0;

	if (node && !node->left && !node->right)
		result = 1;
	return (result);
}
