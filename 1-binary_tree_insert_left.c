#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as the left-child
 *                           of another node.
 * @parent: a pointer to the node to insert the left-child in.
 * @value: the value to store in the new node.
 * Description: If parent already has a left-child, the new node must take its
 *              place and the old left-child must be set as the left-child of
 *              the new-node.
 * Return: returns a pointer to the created node,
 *         returns NULL on failure,
 *         returns NULL if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *temp;

	if (!parent)
		return (NULL);

	/* create new_node */
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	/* store previous parent->left */
	temp = parent->left;

	/* update parent->left to new_node */
	parent->left = new_node;

	/* update left-child of new_node to former parent->left */
	new_node->left = temp;

	/* if former parent->left != NULL update its parent pointer to new_node */
	if (new_node->left != NULL)
		new_node->left->parent = new_node;

	return (new_node);
}
