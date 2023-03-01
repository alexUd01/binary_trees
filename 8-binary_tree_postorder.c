#include "binary_trees.h"

/**
 * binary_tree_postorder - a function that goes through a binary tree using
 *                         post-order traversal.
 * @tree: a pointer to the root node of the tree to traverse.
 * @func: a pointer to a function to call for each node.
 * Description: if @tree or @func is NULL, do nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	/* ---------------- left recursion ---------------- */

	if (tree->left)
		binary_tree_postorder(tree->left, func);



	/* ----------------- right recursion ---------------- */

	if (tree->right)
		binary_tree_postorder(tree->right, func);


	/* call function on only leaf nodes */
	if (tree->left == NULL && tree->right == NULL)
	{
		func(tree->n);
		return;
	}

	/* call function on NON-leaf/parent nodes when leaf */
	/* node recursively returns */
	func(tree->n);
}
