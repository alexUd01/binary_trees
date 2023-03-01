#include "binary_trees.h"


/* ------------------------ 11-binary_tree_size ------------------------- */
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


/* ------------------------ 9-binary_tree_height ------------------------- */

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

/**
 * _pow - a helper function that returns the power of @x (just for this
 *        instance only)
 * @x: integer
 * @y: the power
 * Return: the power
 */
size_t _pow(int x, int y)
{
	if (y == 0)
		return (1);
	return (x * _pow(x, y - 1));
}


/* ------------------------ binary_tree_is_perfect ------------------------- */

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: returns 1 if @tree is perfect otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t real_tree_size, real_tree_height, theoretical_tree_size;

	if (!tree)
		return (0);

	/* get the size of `tree` */
	real_tree_size = binary_tree_size(tree);

	/* get the height of `tree` */
	real_tree_height = 1 + binary_tree_height(tree);

	/* theoretical_tree_size = (2^real_tree_height) - 1; */
	theoretical_tree_size = _pow(2, real_tree_height) - 1;

	/* compare real vs theoritical size */
	if (real_tree_size == theoretical_tree_size)
		return (1);

	return (0);
}
