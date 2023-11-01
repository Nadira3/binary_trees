#include "binary_trees.h"

/**
 * Write a function that measures the size of a binary tree
 *
 * Prototype: size_t find_tree_size(const binary_tree_t *tree);
 * Where tree is a pointer to the root node of the tree to measure the size
 * If tree is NULL, the function must return 0
 */

size_t find_tree_size(const binary_tree_t *tree, size_t num)
{
	if (tree && ((num && !tree->parent) || (!tree->left && !tree->right)))
		return (num + 1);
	if (tree)
	{
		if (tree->left)
			return find_tree_size(tree->left, num + 1);
		if (tree->right)
			return find_tree_size(tree->right, num + 1);
	}
	return (num);
}

size_t binary_tree_size(const binary_tree_t *tree)
{
	/* size of tree  size of left subtree + size of right subtree + 1(node) */
	size_t result = 0;
	
	if (tree)
		result = find_tree_size(tree->left, 0) + find_tree_size(tree->right, 0) + 1;

	return (result);
}
