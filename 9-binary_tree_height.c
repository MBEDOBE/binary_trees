#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree
 * Description: if tree is NULL, your function must return 0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree)
	{
		if (tree->left)
			l = 1 + binary_tree_height(tree->left);

		if (tree->right)
			r = 1 + binary_tree_height(tree->right);
		return (l > r ? l : r);
	}
	return (0);
}
