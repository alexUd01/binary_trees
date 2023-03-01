#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures the balance factor of a
 *                       binary tree
 * @tree: a pointer to the root node of the treeto measure the balance factor
 * Return: returns the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (!tree)
		return (0);

	if (tree->left)
		balance++;
	if (tree->right)
		balance++;

	return (balance);
}
