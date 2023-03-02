#include "binary_trees.h"


/* -------------------------- measure height ----------------------------- */
/**
 * binary_tree_height - a function that recursively measures the height of
 *                      a binary tree.
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: returns the height of the tree (SUCCESS) or 0 (on FAILURE)
 *         returns 0 if tree is NULL
 */
int binary_tree_height(const binary_tree_t *tree)
{
	int l_height;
	int r_height;

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

/* -------------------------- check balance factor ------------------------ */
/**
 * binary_tree_balance - a function that measures the balance factor of a
 *                       binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: returns the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bal, l_height = -1, r_height = -1;

	if (!tree)
		return (0);

	l_height = tree->left ? binary_tree_height(tree->left) : -1;
	r_height = tree->right ? binary_tree_height(tree->right) : -1;

	/* balance factor is the difference between the left height and */
	/* right subtrees of a node */
	bal = l_height - r_height;

	return (bal);

	/* r_height and l_height were initialized with -1 */
	/* NOTE: - the height of an empty tree is -1 */
	/*       - the height of a leaf node is 0 */
}
