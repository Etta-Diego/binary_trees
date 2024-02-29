#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: size of the tree.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (tree != NULL && tree->parent != NULL)
	{
		return (1 + binary_tree_depth(tree->parent));
	}
	else
		return (0);

}
