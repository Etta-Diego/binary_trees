#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: size of the tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	left = 0, right = 0;
	if (tree != NULL)
	{
		if (tree->right != NULL)
		{
			right = 1 + binary_tree_height(tree->right);
		}
		if (tree->left != NULL)
		{
			left = 1 + binary_tree_height(tree->left);
		}
		if (left > right)
		{
			return (left);
		}
		else
		{
			return (right);
		}
	}
	else
		return (0);
}
