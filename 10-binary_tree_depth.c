#include "binary_trees.h"

/**
 * find_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: is a pointer to the node to measure the depth
 * @num: measured tree depth
 * Return: 0 || depth of tree
 */
size_t find_tree_depth(const binary_tree_t *tree, size_t num)
{
	if (tree && !tree->parent)
		return (num);
	if (tree)
		return (find_tree_depth(tree->parent, num + 1));
	return (num);
}

/**
 * binary_tree_depth - returns the depth of a node in a binary tree
 *
 * Prototype: size_t binary_tree_depth(const binary_tree_t *tree);
 * @tree: is a pointer to the node to measure the depth
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (find_tree_depth(tree, 0));
}
