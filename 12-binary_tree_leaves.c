#include "binary_trees.h"

/**
 * binary_tree_size - a function that counts the leaves in a binary tree.
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Description: If tree is NULL, returns 0
 *              A NULL pointer is not a leaf
 * Return: returns the number of leaves in a bunary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	/* real leaf-node */
	if (!tree->left && !tree->right)
		return (1);

	/* alx leaf node */
	if (tree->left)
		count++;
	if (tree->right)
		count++;

	return (count);
}
