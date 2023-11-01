#include "binary_trees.h"

/**
 * Write a function that measures the depth of a node in a binary tree
 *
 * Prototype: size_t binary_tree_depth(const binary_tree_t *tree);
 * Where tree is a pointer to the node to measure the depth
 * If tree is NULL, your function must return 0
 */

size_t find_tree_depth(const binary_tree_t *tree, size_t num)
{
	if (tree && !tree->parent)
		return (num);
	if (tree)
		return find_tree_depth(tree->parent, num + 1);
	return (num);
}

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (find_tree_depth(tree, 0));
}
