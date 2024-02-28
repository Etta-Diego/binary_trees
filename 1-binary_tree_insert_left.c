#include "binary_trees.h"

binary_tree_t *create_node(binary_tree_t *parent, int value)
{
      	binary_tree_t *new_node;
       	new_node = malloc(sizeof(binary_tree_t));
        if (new_node == NULL)
        {
                return NULL;
        }
        new_node->left = NULL;
        new_node->right = NULL;
	new_node->parent = parent;
        new_node->n = value;

        return new_node;
}

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	if (parent == NULL)
	{
		return NULL;
	}
	new_node = create_node(parent, value);
	if (new_node == NULL)
	{
		return NULL;
	}
	if (parent->left == NULL)
	{
		parent->left = new_node;
	}
	else
	{
		new_node->left = parent->left;
		parent->left = new_node;
		new_node->left->parent = new_node;
	}
	return (new_node);
}
