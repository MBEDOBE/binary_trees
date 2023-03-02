#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: return pointer to the sibling node
 * Description: if node is NULL or the parent is NULL, return NULL
 * if node has no sibling, return NULL
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent)
	{
		if (node->parent->left != node)
			return (node->parent->left);
		return (node->parent->right);
	}
	return (NULL);
}
