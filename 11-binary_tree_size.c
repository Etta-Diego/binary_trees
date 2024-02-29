#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: size of the tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int tree_size;

	tree_size = 0;

	if (tree == NULL)
	{
		tree_size = 0;
	}

	if (tree != NULL)
	{
		tree_size = (binary_tree_size(tree->left)
				+ 1 + binary_tree_size(tree->right));
	}

	return (tree_size);
}
