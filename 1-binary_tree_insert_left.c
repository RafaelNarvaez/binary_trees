#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a node at left side of binary tree
 * @parent: Pointer to parent
 * @value: The value to insert in node
 * Return: Left new node pointer
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
		new_node->parent = parent;
		new_node->left = parent->left;
	}
	parent->left = new_node;

	return (new_node);
}
