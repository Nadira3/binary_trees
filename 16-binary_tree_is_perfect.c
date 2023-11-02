#include "binary_trees.h"
#include "12-binary_tree_leaves.c"
#include "9-binary_tree_height.c"
/**
 * _pow_recursion - prints a string, followed by a new line
 * @x: number
 * @y: power
 * Return: size_t
 */
size_t _pow(size_t x, size_t y)
{
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow(x, y - 1));
}


/**
 * Write a function that counts the nodes with at least 1 child in a binary tree
 *
 * Prototype: size_t binary_tree_nodenums(const binary_tree_t *tree);
 * Where tree is a pointer to the root node of the tree to count the number of nodes
 * If tree is NULL, the function must return 0
 * A NULL pointer is not a node
 * A perfect binary tree of height h has 2h leaf nodes
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (binary_tree_leaves(tree) == _pow(2, binary_tree_height(tree)))
		return (1);
	return (0);
}
