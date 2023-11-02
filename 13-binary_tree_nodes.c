#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * Prototype: size_t binary_tree_nodes(const binary_tree_t *tree);
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: If tree is NULL, the function must return 0
 * A NULL pointer is not a node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree && (tree->left || tree->right))
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	else
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
