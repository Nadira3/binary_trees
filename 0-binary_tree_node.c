#include "binary_trees.h"

/**
 * binary_tree_node - creates a node
 * @parent: node's parent
 * @value: node->n
 * Return: node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (0);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
