#include "binary_trees.h"

/**
 * binary_tree_levelorder - a function that goes through a binary tree using
 *                          level-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a finction to call for each node. The value in the node
 *        must be passed as a parameter to his function. 
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->parent == NULL)  /* root node */
		func(tree->n);
	if (tree->left)
		func(tree->left->n);
	if (tree->right)
		func(tree->right->n);

	binary_tree_levelorder(tree->left, func);
	binary_tree_levelorder(tree->right, func);
	
}
