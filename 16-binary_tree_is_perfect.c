#include "binary_trees.h"

/**
 * max - function that checks the maximum of two numbers
 * @num1: first number
 * @num2: second number
 * Return: maximum of the two numbers
 */

int max(int num1, int num2)
{
	return ((num1 >= num2) ? num1 : num2);
}

/**
 * binary_tree_heights - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: size of the tree.
 */

size_t binary_tree_heights(const binary_tree_t *tree)
{
	int left, right;

	left = 0, right = 0;
	if (tree != NULL)
	{
		return (max(1 + binary_tree_heights(tree->left)),
					(1 + binary_tree_heights(tree->right)));
	}
	else

		return (0);
}

/**
 * binary_tree_sizes- measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size..
 * Return: size of the tree.
 */

size_t binary_tree_sizes(const binary_tree_t *tree)
{
	int tree_size;

	tree_size = 0;

	if (tree == NULL)
	{
		tree_size = 0;
	}

	if (tree != NULL)
	{
		tree_size = (binary_tree_sizes(tree->left)
				+ 1 + binary_tree_sizes(tree->right));
	}{

	return (tree_size);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 for perfect binary tree, 0 for otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t size, perfect_size;

	size = 0, perfect_size = 0;
	if (tree == NULL)
	{
		return (0);
	}

	size = binary_tree_heights(tree);
	perfect_size = (1 << (size + 1)) - 1;
	if (perfect_size == binary_tree_sizes(tree))
	{
		return (1);
	}
	else
		return (0);
}
