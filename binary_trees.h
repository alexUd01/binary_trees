#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;


/* Binary Search Tree */
typedef struct binary_tree_s bst_t;


/* AVL Tree */
typedef struct binary_tree_s avl_t;


/* Max Binary Heap */
typedef struct binary_tree_s heap_t;




/* ---------------------> FUNCTION DECLARATIONS <------------------ */

/* binary_print_tree - prints a binary tree */
/* Description: (wasn't written by me) */
/* Credits: http://stackoverflow.com/a/13755911/5184480) */
void binary_tree_print(const binary_tree_t *tree);

/* create node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* insersion */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* destroy tree */
void binary_tree_delete(binary_tree_t *tree);

/* check if node is leaf or root */
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);

/* traversal */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* height, depth */
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);


#endif /* BINARY_TREES_H */
