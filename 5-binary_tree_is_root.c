#include "binary_trees.h"

/**
* binary_tree_is_root - Check if node is root
* @node: const pointer
* Return: 1 if is a root, otherwise 0.
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);
	return (0);
}
