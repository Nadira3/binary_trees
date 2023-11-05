#include "binary_trees.h"

/**
 * is_bst_helper_left - checks if a node's left side is a valid BST
 *
 * @tree: is a pointer to the root node of the tree to is_bst
 * @max: node value
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int is_bst_helper_left(const binary_tree_t *tree, int max)
{
	if (!tree)
		return (1);
	if (tree->n >= max)
		return (0);
	return (is_bst_helper_left(tree->left, max) &&
			is_bst_helper_left(tree->right, max));
	return (1);
}

/**
 * is_bst_helper_right - checks if a node's right side is a valid BST
 *
 * @tree: is a pointer to the root node of the tree to is_bst
 * @min: node value
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int is_bst_helper_right(const binary_tree_t *tree, int min)
{
	if (!tree)
		return (1);
	if (tree->n <= min)
		return (0);
	return (is_bst_helper_right(tree->left, min) &&
			is_bst_helper_right(tree->right, min));
	return (1);
}

/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 *
 * Prototype: int binary_tree_is_bst(const binary_tree_t *tree);
 * @tree: is a pointer to the root node of the tree to is_bst
 * Return: 1 if tree is a valid BST, and 0 otherwise
 * If tree is NULL, return 0
 *
 * Properties of a Binary Search Tree:
 *
 * The left subtree of a node contains only nodes with values < node’s value
 * The right subtree of a node contains only nodes with values > node’s value
 * The left and right subtree each must also be a binary search tree
 * There must be no duplicate values
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree && (tree->left && tree->right ? (tree->left->n < tree->n &&
					tree->right->n) > tree->n : tree->left ?
				tree->left->n < tree->n : tree->right ? tree->right->n > tree->n : 1))
		return (1);
	if (tree && is_bst_helper_left(tree->left, tree->n) &&
			is_bst_helper_right(tree->right, tree->n))
		return (binary_tree_is_bst(tree->left) && binary_tree_is_bst(tree->right));
	return (0);
}
