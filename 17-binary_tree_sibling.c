#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * Prototype: binary_tree_t *binary_tree_sibling(binary_tree_t *node);
 * @node: is a pointer to the node to find the sibling
 *
 * Return: a pointer to the sibling node
 * If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tp = node ? node->parent : NULL;

	return (node ? tp ? node == tp->left ? tp->right : tp->left : NULL : NULL);
}
