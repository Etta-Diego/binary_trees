#include "binary_trees.h"

/**
 * binary_tree_depth - function to get the depth of a tree
 * @tree: a pointer to the node of the tree to get
 * Return: depth of a tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int left_depth, right_depth;

	if (tree == NULL)
		return (0);


	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);
	if (left_depth > right_depth)
		return (left_depth + 1);
	else
		return (right_depth + 1);

}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 for perfect binary tree, 0 for otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_tree, right_tree, left_depth, right_depth;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (tree->left == NULL || tree->right == NULL)
		return (0);
	left_tree = binary_tree_depth(tree->left);
	right_tree =  binary_tree_depth(tree->right);
	if (left_tree != right_tree)
		return (0);
	left_depth = binary_tree_is_perfect(tree->left);
	right_depth = binary_tree_is_perfect(tree->right);
	return (left_depth && right_depth);
}
