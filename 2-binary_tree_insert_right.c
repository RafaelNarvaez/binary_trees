#include "binary_trees.h"

/**
* binary_tree_insert_right - Insert a node at right side of binary tree
* @parent: Pointer to parent
* @value: The value to insert in node
* Return: Left new node pointer
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		parent->right->parent = new_node;
		new_node->right = parent->right;
		new_node->parent = parent;
	}
	parent->right = new_node;

	return (new_node);
}
