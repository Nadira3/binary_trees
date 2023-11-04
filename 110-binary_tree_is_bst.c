#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * Write a function that is_bsts if a binary tree is a valid Binary Search Tree
 *
 * Prototype: int binary_tree_is_bst(const binary_tree_t *tree);
 * Where tree is a pointer to the root node of the tree to is_bst
 * Your function must return 1 if tree is a valid BST, and 0 otherwise
 * If tree is NULL, return 0
 *
 * Properties of a Binary Search Tree:
 *
 * The left subtree of a node contains only nodes with values less than the node’s value
 * The right subtree of a node contains only nodes with values greater than the node’s value
 * The left and right subtree each must also be a binary search tree
 * There must be no duplicate values
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree && tree->left->n < tree->n && tree->right->n > tree->n)
		return (1);
	if (binary_tree_height(tree) > 1)
		return (binary_tree_is_bst(tree->left) && binary_tree_is_bst(tree->right));
	return (0);
}
