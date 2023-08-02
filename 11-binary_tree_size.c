#include "binary_trees.h"

/**
 *binary_tree_size - measures the size of a binary tree
 *@tree:  pointer to the root node of the tree
 *
 *Return: size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 1, left_count, right_count;

	if (tree)
	{
		left_count = count + binary_tree_size(tree->left);
		right_count = count + binary_tree_size(tree->right);
		return ((left_count + right_count) - 1);
	}
	return (0);
}
