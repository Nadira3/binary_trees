#include "binary_trees.h"

/**
 * Write a function that performs a right-rotation on a binary tree
 *
 * Prototype: binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);
 * Where tree is a pointer to the root node of the tree to rotate
 * Your function must return a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *amp = NULL;

	if (!tree)
		return (NULL);
	amp = tree->left;
	if (amp)
	{
		if (amp->right)
		{
			amp->right->parent = tree;
			tree->left = amp->right;
		}
		else
			tree->left = NULL;
		tree->parent = amp;
		amp->right = tree;
	}
	return (amp);
}
