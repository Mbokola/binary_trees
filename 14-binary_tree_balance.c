#include "binary_trees.h"

/**
 *binary_tree_leaves - counts the nodes with at least 1 child in a binary tree
 *@tree:  pointer to the root node of the tree
 *
 *Return: nodes with at least 1 child in a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree)
	{
		left_height = binary_tree_height(tree->left);
		right_height =  binary_tree_height(tree->right);

		return ((int)(left_height - right_height));
	}
	return (0);
}
