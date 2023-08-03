#include "binary_trees.h"

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
		left_height = binary_tree_height(tree->left);
		right_height =	binary_tree_height(tree->right);

		return ((int)(left_height - right_height));
	}
	return (0);
}

/**
 *binary_tree_height - measures the height of a binary tree
 *@tree:  pointer to the root node of the tree to measure the height.
 *
 *Return: Height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_count = 0, left_count = 0, height;

	if (tree)
	{
		left_count = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right_count = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		height = left_count > right_count ? left_count : right_count;
		return (height);
	}
	return (0);
}
