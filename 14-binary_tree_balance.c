#include "binary_trees.h"

/**
 * binary_tree_balance -function that measures the balance
 * factor of a binary tree
 * @tree: pointer to teh root node of the tree to measure the balance factor
 *
 * Return: 0 if tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int size_1 = 0, size_2 = 0;

	if (tree)
	{
		size_1 = tree->left ? 1 + binary_tree_balance(tree->left) : size_1;
		size_2 = tree->right ? 1 + binary_tree_balance(tree->right) : size_1;

		return (size_1 - size_2);
	}

	return (size_1 - size_2);
}
