#include "binary_trees.h"

/**
 * Write a function that finds the sibling of a node
 * Prototype: binary_tree_t *binary_tree_sibling(binary_tree_t *node);
 * Where node is a pointer to the node to find the sibling
 * Your function must return a pointer to the sibling node
 * If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	return node ? node->parent ? node == node->parent->left ? node->parent->right : node->parent->left: NULL : NULL;
}
