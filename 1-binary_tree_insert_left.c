#include "binary_trees.h"

/**
 * Where parent is a pointer to the node to insert the left-child in
 * And value is the value to store in the new node
 * Your function must return a pointer to the created node,
 * or NULL on failure or if parent is NULL
 * If parent already has a left-child, the new node must take its place,
 * and the old left-child must be set as the left-child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL, *temp = NULL;

	if (parent)
	{
		node = binary_tree_node(parent, value);
		if (!parent->left)
			parent->left = node;
		else
		{
			temp = parent->left;
			temp->parent = node;
			parent->left = node;
			node->left = temp;
		}
	}
	return (node);
}
