#include "binary_trees.h"

/**
 *height - measures the height of a binary tree
 *@tree:  pointer to the root node of the tree to measure the height.
 *
 *Return: Height of binary tree
 */
int height(const binary_tree_t *tree)
{
	size_t right_count = 0, left_count = 0, total_height;

	if (tree)
	{
		left_count = tree->left ? 1 + height(tree->left) : 0;
		right_count = tree->right ? 1 + height(tree->right) : 0;
		total_height = left_count > right_count ? left_count : right_count;
		return (total_height);
	}
	return (0);
}

/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree:  pointer to the root node of the tree
 *
 *Return: Balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree)
	{
		left_height = tree->left ? height(tree->left) : -1;
		right_height =	tree->right ? height(tree->right) : -1;

		return (left_height - right_height);
	}
	return (0);
}
