#include "binary_trees.h"
#include "12-binary_tree_leaves.c"
#include "9-binary_tree_height.c"
/**
 * _pow - prints a string, followed by a new line
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
 * binary_tree_is_perfect - checks if a tree is perfect
 *
 * Prototype: int binary_tree_is_perfect(const binary_tree_t *tree);
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 0 || 1
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
