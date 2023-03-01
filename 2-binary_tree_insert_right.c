#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node as the right-child
 *                            of another node.
 * @parent: a pointer to the node to insert the right-child in.
 * @value: the value to store in the new node.
 * Description: If parent already has a right-child, the new node must take
 *              its place, and the old right-child must be set as the
 *              right-child ofthe new node.
 * Return: returns a pointer to the created node, or NULL on failure or if
 *         parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	/* create new node */
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	/* insersion */
	new_node->right = parent->right;
	parent->right = new_node;
	if (new_node->right)
		new_node->right->parent = new_node;

	return (new_node);
}
