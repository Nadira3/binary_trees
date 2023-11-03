#include "binary_trees.h"
#include "17-binary_tree_sibling.c"
#include "10-binary_tree_depth.c"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 * If no common ancestor was found, your function must return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	size_t fst = binary_tree_depth(first), snd = binary_tree_depth(second);

	if (first && second)
	{
		if (first != binary_tree_sibling((binary_tree_t *)second))
			return binary_trees_ancestor(first == second ? first->left : fst < snd ? first
					: first->parent, first == second ? first->right
					: fst <= snd ? second->parent : second);
		return (first->parent);
	}
	return (NULL);
}
