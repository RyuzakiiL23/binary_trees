#include "binary_trees.h"

/**
 * binary_tree_height - is a function that measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 *
 * Return: 0 if tree is null otherwise the hight of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;
	int height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	height = (1 + (left_height > right_height ? left_height : right_height));
	return (height);
}
