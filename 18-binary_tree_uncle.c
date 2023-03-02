#include "binary_trees.h"

/**
 * binary_tree_uncle - a function that finds the uncle of a node.
 * @node: a pointer to the node to find the uncle
 * Description: if node is NULL returns NULL
 *              if node has no uncle returns NULL
 * Return: returns a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	/* check right uncle */
	if (node->parent->parent->right &&
	    node->parent->parent->right != node->parent)
		return (node->parent->parent->right);

	/* check left uncle */
	if (node->parent->parent->left &&
	    node->parent->parent->left != node->parent)
		return (node->parent->parent->left);

	/* no uncles available */
	return (NULL);
}
