#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Chechs if a node is a leaf
 * @node: Pointer to the node to check
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
