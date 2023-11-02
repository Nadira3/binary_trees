
#include "binary_trees.h"
/**
 * Write a function that measures the balance factor of a binary tree
 * Prototype: int binary_tree_balance(const binary_tree_t *tree);
 * Where tree is a pointer to the root node of the tree to measure the balance factor
 * If tree is NULL, return 0
 */

size_t binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (tree)
	{
		height_l = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
		height_r = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	}
	return (height_l - height_r);
}

