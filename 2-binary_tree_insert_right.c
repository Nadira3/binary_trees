#include "binary_trees.h"

/**
 * Where parent is a pointer to the node to insert the right-child in
 * And value is the value to store in the new node
 * Your function must return a pointer to the created node,
 * or NULL on failure or if parent is NULL
 * If parent already has a right-child, the new node must take its place,
 * and the old right-child must be set as the right-child of the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL, *temp = NULL;

	if (parent)
	{
		node = binary_tree_node(parent, value);
		if (!parent->right)
			parent->right = node;
		else
		{
			temp = parent->right;
			temp->parent = node;
			parent->right = node;
			node->right = temp;
		}
	}
	return (node);
}
