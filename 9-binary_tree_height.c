#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: returns the height of the tree (SUCCESS) or 0 (on FAILURE)
 *         returns 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height;
	size_t r_height;

	if (!tree)
		return (0);

	/* measure height recursively */
	l_height = tree->left ? (1 + binary_tree_height(tree->left)) : 0;
	r_height = tree->right ? (1 + binary_tree_height(tree->right)) : 0;

	/* return the length of the farthest node */
	if (l_height > r_height)
		return (l_height);
	return (r_height);
}
