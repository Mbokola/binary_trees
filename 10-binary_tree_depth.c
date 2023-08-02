#include "binary_trees.h"

/**
 *binary_tree_depth - measures the depth of a node in a binary tree
 *@tree:  pointer to the root node of the tree to measure the depth.
 *
 *Return: depth of binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 1;

	if (tree)
	{
		if (!tree->parent)
			return (0);
		return (count + binary_tree_depth(tree->parent));
	}
	return (0);
}
