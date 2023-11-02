#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the size of a binary tree
 *
 * Prototype: size_t count_leaves(const binary_tree_t *tree);
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: If tree is NULL, the function must return 0
 *	otherwise return number of leaves in the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree && !tree->left && !tree->right)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
