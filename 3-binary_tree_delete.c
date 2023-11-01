#include "binary_trees.h"

/**
 * Prototype: void binary_tree_delete(binary_tree_t *tree);
 * Where tree is a pointer to the root node of the tree to delete
 * If tree is NULL, do nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
