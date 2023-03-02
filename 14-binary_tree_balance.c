#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures the balance factor of a
 *                       binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: returns the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bal = 0, l_bal = 0, r_bal = 0;

	if (!tree)
		return (0);

	/* all leaf-nodes have the value zero (0) as balance factor */
	if (!tree->left && !tree->right)
		return (0);

	/* left recursive check */
	if (tree->left)
		l_bal = 1 + binary_tree_balance(tree->left);

	/* right recursive check */
	if (tree->right)
		r_bal = 1 + binary_tree_balance(tree->right);

	/* balance factor is the difference between the left height and */
	/* right subtrees of a node */
	bal = l_bal - r_bal;

	return (bal);
}
