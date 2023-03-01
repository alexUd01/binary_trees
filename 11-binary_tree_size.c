#include "binary_trees.h"

/**
 * size_without_root - a helper function that recursively calculates the size
 *                     of all nodes except the root node.
 * @parent: a pointer to the root node.
 * Return: returns the size of the binary tree (not counting the root node).
 */
size_t size_without_root(const binary_tree_t *parent)
{
	size_t size, l_height, r_height;

	/* measure height recursively */
	l_height = parent->left ? (1 + size_without_root(parent->left)) : 0;
	r_height = parent->right ? (1 + size_without_root(parent->right)) : 0;

	size = l_height + r_height;

	return (size);
}

/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: returns the size of @tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);

	size = size_without_root(tree);

	/* `size_without_root` returns the size of every node except */
	/* the root node. Therefore add 1 to `size` as count for `root` */
	return (size + 1);
}
