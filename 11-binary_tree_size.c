#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size of the root node
 * Description: if tree is NULL, the function must return 0
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree)
	{
		size = tree->left ? size + binary_tree_size(tree->left) : size;
		size = tree->right ? size + binary_tree_size(tree->right) : size;

		return (size);
	}
	return (0);
}
