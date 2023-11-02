#include "binary_trees.h"

/**
 * find_tree_size - measures the size of a node in a binary tree
 *
 * @tree: is a pointer to the node to measure the size
 * Return: size of tree
 */
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
 * binary_tree_size - returns the size of a binary tree
 *
 * Prototype: size_t binary_tree_size(const binary_tree_t *tree);
 * @tree: is a pointer to the node to measure the size
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* size of tree = size of left subtree + size of right subtree + 1(node) */
	return (tree ? find_tree_size(tree) + 1 : 0);
}
