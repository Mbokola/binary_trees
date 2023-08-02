#include "binary_trees.h"

/**
 *binary_tree_leaves - measures the size of a binary tree
 *@tree:  pointer to the root node of the tree
 *
 *Return: size of binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_count, right_count;

	if (tree)
	{
		left_count = binary_tree_leaves(tree->left);
		right_count = binary_tree_leaves(tree->right);
		if (!left_count || !right_count)
			return (1);
		return (left_count + right_count);
	}
	return (0);
}
