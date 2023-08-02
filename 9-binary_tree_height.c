#include "binary_trees.h"

/**
 *binary_tree_height - measures the height of a binary tree
 *@tree:  pointer to the root node of the tree to measure the height.
 *
 *Return: Height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_count = 0, left_count = 0;
	const binary_tree_t *current = tree;

	if (current)
	{
		while (current)
		{
			if (current->left)
				current = current->left;
			else
				current = current->right;
			left_count++;
		}

		current = tree;

		while (current)
		{
			if (current->right)
				current = current->right;
			else
				current = current->left;
			right_count++;
		}

	}
	if (right_count > left_count)
		return (right_count - 1);
	return (left_count - 1);
}
