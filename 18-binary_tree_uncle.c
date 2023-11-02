#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * Prototype: binary_tree_t *binary_tree_uncle(binary_tree_t *node);
 * @node: is a pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node
 * If node is NULL or the parent is NULL, return NULL
 * If node has no uncle, return NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *tmp = node ? node->parent : NULL;

	return (node ? tmp ? binary_tree_sibling(tmp) : NULL : NULL);
}
