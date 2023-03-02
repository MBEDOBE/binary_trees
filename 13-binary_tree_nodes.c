#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: if tree is NULL, the function must return 0
 * Description: A NULL pointer is not a node
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counts = 0;

	if (tree)
	{
		counts = tree->left || tree->right ? counts + 1 : counts;
		counts = tree->left ? counts + binary_tree_nodes(tree->left) : counts;
		counts = tree->right ? counts + binary_tree_nodes(tree->right) : counts;

		return (counts);
	}

	return (counts);
}
