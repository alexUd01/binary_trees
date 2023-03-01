#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of a node in a
 *                     binary tree.
 * @tree: a pointer to the node to measure the depth of.
 * Description: depth of a node is the distance of that node from the root node
 * Return: returns the depth of @tree. returns 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);

	/* measure depth recursively */
	depth = tree->parent ? (1 + binary_tree_depth(tree->parent)) : 0;

	return (depth);
}
