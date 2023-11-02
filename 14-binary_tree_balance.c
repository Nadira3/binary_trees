#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * Write a function that measures the balance factor of a binary tree
 * Prototype: int binary_tree_balance(const binary_tree_t *tree);
 * Where tree is a pointer to the root node of the tree to measure the balance factor
 * If tree is NULL, return 0
 */

size_t binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left && tree->right)
			return binary_tree_height(tree->left) - binary_tree_height(tree->right);
		else
			return tree->left ? binary_tree_height(tree) - 0 : 0 - binary_tree_height(tree);
	}
	return (0);
}
