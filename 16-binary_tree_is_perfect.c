#include "binary_trees.h"

/**
 *get_height - measures the height of a binary tree
 *@tree:  pointer to the root node of the tree to measure the height.
 *
 *Return: Height of binary tree
 */
int get_height(const binary_tree_t *tree)
{
	size_t right_count = 0, left_count = 0, total_height;

	if (tree)
	{
		left_count = tree->left ? 1 + get_height(tree->left) : 0;
		right_count = tree->right ? 1 + get_height(tree->right) : 0;
		total_height = left_count > right_count ? left_count : right_count;
		return (total_height);
	}
	return (0);
}

/**
 *binary_tree_is_perfect - checks if a binary tree is perfect
 *@tree:  pointer to the root node of the tree
 *
 *Return: 1 if true 0 if false
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_count, right_count, left_height, right_height;

	if (tree)
	{
		if (!tree->left && !tree->right)
			return (1);
		left_count = binary_tree_is_perfect(tree->left);
		right_count = binary_tree_is_perfect(tree->right);
		left_height = tree->left ? 1 + get_height(tree->left) : 0;
		right_height = tree->right ? 1 + get_height(tree->right) : 0;

		if (left_count == right_count && right_height == left_height)
			return (1);
	}
	return (0);
}
