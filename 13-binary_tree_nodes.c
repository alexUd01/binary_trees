#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the nodes with at least 1 child
 *                     in a binary tree
 * @tree: a pointer to the root node of the tree to count the numner of nodes
 * Return: returns the number of nodes with at least 1 child
 *         if tree is NULL, the function returns 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l_count = 0, r_count = 0, counted = 0;

	if (!tree)
		return (0);

	if (tree->left)
	{
		l_count = 1 + binary_tree_nodes(tree->left);
		/* set a flag to identify counted nodes */
		counted = 1;
	}
	if (tree->right)
	{
		/* count right-parent nodes */
		r_count = 1 + binary_tree_nodes(tree->right);
		/* subtract 1 from `r_count` if already counted above */
		if (counted)
			r_count--;
	}

	return (l_count + r_count);
}
