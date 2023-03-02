#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node or Null on failure or if parent is NULL
 *
 * Description: if parent already has a right-child, the new node must
 * take its place, and the old left-child must be set as the right-child
 * of the new node.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	if (parent->right)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;

	return (NULL);
}
