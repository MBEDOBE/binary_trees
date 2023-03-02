#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a
 * node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the tree
 * Description: if tree is NULL, your function must return 0
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree)
	{
		if (tree->parent)
			depth = 1 + binary_tree_depth(tree->parent);

		return (depth);
	}
	return (0);
}
