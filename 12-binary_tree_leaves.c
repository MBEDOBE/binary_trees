#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: if Tree is NULL, return 0
 * Description: A NULL pointer is not a leaf
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves = !(tree->left) && !(tree->right) ? leaves + 1 : leaves;

		leaves = tree->left ? leaves + binary_tree_leaves(tree->left) : leaves;

		leaves = tree->right ? leaves + binary_tree_leaves(tree->right) : leaves;

		return (leaves);
	}
	return (leaves);
}
