#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, return 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree->left && tree->right)
		return (1);
	return (0);
}
