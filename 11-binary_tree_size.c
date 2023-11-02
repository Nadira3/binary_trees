#include "binary_trees.h"
size_t find_tree_size(const binary_tree_t *tree)
{
	size_t size_l = 0, size_r = 0;

	if (tree)
	{
		size_l = tree->left ? 1 + find_tree_size(tree->left) : 0;
		size_r = tree->right ? 1 + find_tree_size(tree->right) : 0;
	}
	return (size_l + size_r);
}

/**
 * Write a function that measures the size of a binary tree
 *
 * Prototype: size_t find_tree_size(const binary_tree_t *tree);
 * Where tree is a pointer to the root node of the tree to measure the size
 * If tree is NULL, the function must return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	/* size of tree = size of left subtree + size of right subtree + 1(node) */
	return (find_tree_size(tree) + 1);
}
