#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree.
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Description: If tree is NULL, returns 0
 *              A NULL pointer is not a leaf
 * Return: returns the number of leaves in a bunary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count, l_count = 0, r_count = 0;

	if (!tree)
		return (0);

	/* leaf-node reached */
	if (!tree->left && !tree->right)
		return (1);

	/* left recursive search */
	if (tree->left)
		l_count = l_count + binary_tree_leaves(tree->left);

	/* right recursive search */
	if (tree->right)
		r_count = r_count + binary_tree_leaves(tree->right);


	/* sum up left and right leaf nodes after each recursion returns */
	count = l_count + r_count;

	return (count);
}
