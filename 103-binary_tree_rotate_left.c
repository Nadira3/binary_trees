#include "binary_trees.h"

/**
 * Write a function that performs a left-rotation on a binary tree
 *
 * Prototype: binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
 * Where tree is a pointer to the root node of the tree to rotate
 * Your function must return a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *amp = NULL;

	if (!tree)
		return (NULL);
	amp = tree->right;
	if (amp)
	{
		if (amp->left)
		{
			amp->left->parent = tree;
			tree->right = amp->left;
		}
		else
			tree->right = NULL;
		tree->parent = amp;
		amp->left = tree;
	}
	return (amp);
}
