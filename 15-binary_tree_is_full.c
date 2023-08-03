#include "binary_trees.h"

/**
 *binary_tree_is_full - checks if a binary tree is full
 *@tree:  pointer to the root node of the tree
 *
 *Return: 1 if true 0 if false
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_count, right_count, check;

	if (tree)
	{
		left_count = 1 + binary_tree_is_full(tree->left);
		right_count = 1 + binary_tree_is_full(tree->right);
		check = left_count == right_count ? 1 : 0;
		return (check);
	}
	return (0);
}
