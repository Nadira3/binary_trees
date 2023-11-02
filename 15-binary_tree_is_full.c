#include "binary_trees.h"

/**
 * Write a function that checks if a binary tree is full
 *
 * Prototype: int binary_tree_is_full(const binary_tree_t *tree);
 * Where tree is a pointer to the root node of the tree to check
 * If tree is NULL, your function must return 0
 *
 * If a binary tree node is NULL then it is a full binary tree.
 * If a binary tree node has empty left and right sub-trees,then it is a full binary tree by definition
 * If a binary tree node has left & right sub-trees,then it is a part of a full binary tree by definition
 * In this case recursively check if the left and right sub-trees are also binary trees themselves.
 * In all other combinations of right and left sub-trees, the binary tree is not a full binary tree.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree || (tree && !tree->left && !tree->right))
		return (1);
	if (tree && tree->right && tree->left)
		if (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right))
			return (1);
	return (0);
}
