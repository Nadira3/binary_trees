#include "binary_trees.h"
#include "18-binary_tree_uncle.c"

/**
 * binary_tree_levelorder - goes through a tree using level-order traversal
 *
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 * If tree or func is NULL, do nothing
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *sibling = binary_tree_sibling((binary_tree_t *)tree);
	binary_tree_t *uncle = binary_tree_uncle((binary_tree_t *)tree);

	if (tree && func)
	{
		func(tree->n);
		if (sibling)
			func(sibling->n);
		binary_tree_levelorder(tree->left, func);
		if (uncle && uncle != uncle->parent->left)
			binary_tree_levelorder(uncle->left, func);
	}
}
