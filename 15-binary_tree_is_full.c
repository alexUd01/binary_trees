#include "binary_trees.h"


/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if tree is full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int  l_check = 0, r_check = 0;

	if (!tree)
		return (0);

	/* recursive left check */
	if (tree->left)
		l_check = binary_tree_is_full(tree->left);

	/* recirsive right check */
	if (tree->right)
		r_check = binary_tree_is_full(tree->right);


	/* please take not of the `!` */
	return (!(r_check ^ l_check));  /* my first cool bitwise expression */
}
