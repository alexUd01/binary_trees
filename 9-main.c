#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;
	size_t height;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);
	root->left->left = binary_tree_node(root->left, 6);
	root->left->right = binary_tree_node(root->left, 56);
	root->right->left = binary_tree_node(root->right, 256);
	root->right->right = binary_tree_node(root->right, 512);
	binary_tree_insert_left(root->left->left, 4);
	binary_tree_insert_right(root->left->left, 9);
	binary_tree_print(root);

	height = binary_tree_height(root);
	printf("Height from %d: %lu\n", root->n, height);
	height = binary_tree_height(root->left);
	printf("Height from %d: %lu\n", root->left->n, height);
	height = binary_tree_height(root->left->right);
	printf("Height from %d: %lu\n", root->left->right->n, height);
	return (0);
}
