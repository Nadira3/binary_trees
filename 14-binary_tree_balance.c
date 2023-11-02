#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * Prototype: int binary_tree_balance(const binary_tree_t *tree);
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: If tree is NULL, return 0
 *	otherwise reurn balance factor of the tree
 */

size_t binary_tree_balance(const binary_tree_t *tree)
{
	binary_tree_t *tmp = tree ? tree->left : NULL;

	if (tree)
	{
		if (tree->left && tree->right)
			return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
		else
			return (tmp ? binary_tree_height(tree) - 0 : 0 - binary_tree_height(tree));
	}
	return (0);
}
