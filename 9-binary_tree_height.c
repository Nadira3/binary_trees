#include "binary_trees.h"

size_t find_tree_height(const binary_tree_t *tree, size_t num)
{
	if (tree && !tree->left && !tree->right)
		return (num);
	if (tree)
	{
		if (tree->left && tree->right)
			return find_tree_height(tree->left, num + 1);
		if (tree->left && !tree->right)
			return find_tree_height(tree->left, num + 1);
		if (!tree->left && tree->right)
			return find_tree_height(tree->right, num + 1);
	}
	return (num);
}

/**
 * Write a function that measures the height of a binary tree
 *
 * Prototype: size_t binary_tree_height(const binary_tree_t *tree);
 * Where tree is a pointer to the root node of the tree to measure the height.
 * If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	return (find_tree_height(tree, 0));
}
