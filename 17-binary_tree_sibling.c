#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Description: if node is NULL or parent is NULL, return NULL.
 * Return: returns a pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	/* check for right sibling */
	if (node->parent->right && node != node->parent->right)
		return (node->parent->right);

	/* check for left sibling */
	if (node->parent->left && node != node->parent->left)
		return (node->parent->left);


	/* no (left/right) siblings */
	return (NULL);
}
