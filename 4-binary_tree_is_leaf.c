#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a function that checks if a node is a leaf
 * @node: a pointer to the node to check
 * Return: returns 1 if node is leaf otherwise 0
 *         if node is NULL returns 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)  /* node is NULL */
		return (0);
	if (node->left == NULL && node->right == NULL)  /* node is leaf */
		return (1);
	return (0);

	/* TODO: What if node is leaf and root? */
	/*       In that case:                  */
	/*       node->parent == NULL           */
	/*       node->left == NULL             */
	/*       node->right == NULL            */
}
