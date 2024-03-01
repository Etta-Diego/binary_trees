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

	if (tree != NULL)
	{
		return (1 + max(binary_tree_heights(tree->left),
					binary_tree_heights(tree->right)));
	}
	else

		return (0);

}


/**
 * binary_tree_balance - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor.
 * Return: balance factor of the binary tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_heights(tree->left);
	right = binary_tree_heights(tree->right);

	return (left - right);
}
