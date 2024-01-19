#include "extern.h"
#include "monty.h"

stack_t *top = NULL;

/**
 *push - push function adds a new
 *item to the stack
 *@value: item to add
 *Return: 0 if successful and return -1
 *if not
 */

int push(int value)
{
	stack_t *tmp = NULL;

	if (is_empty())
	{
		top = makenode(value);
		if (top == NULL)
			return (-1);
		top->next = NULL;
		top->prev = NULL;
		return (0);
	}

	tmp = makenode(value);
	if (tmp == NULL)
		return (-1);
	tmp->next = top;
	tmp->prev = NULL;
	top = tmp;
	return (0);
}

/**
 *pop - pop function removes the current
 *item from the stack
 *Return: the item removed else -2 if pop failed
 */
int pop(void)
{
	int item;
	stack_t *clr;

	if (is_empty())
	{
		return (-2);
	}

	if (top->next == NULL)
	{
		item = top->n;
		clr = top;
		top = top->next;
		free(clr);
		return (item);
	}

	item = top->n;
	clr = top;
	top = top->next;
	free(clr);
	return (item);
}

/**
 *_full - This function checks if stack is full
 *Return: 1 if true and 0 if otherwise
 */
int _full(void)
{
	if (top->next == NULL)
		return (1);
	return (0);
}

/**
 *_empty - It checks if stack is empty
 *Return: 1 if true and 0 if otherwise
 */
int _empty(void)
{
	if (top == NULL)
		return (1);
	return (0);
}

/**
 *makenode - It create a new node
 *@val: item to stored in node
 *Return: pointer to the newly created node
 */
stack_t *makenode(int val)
{
	stack_t *fresh_node;

	fresh_node = (stack_t *)malloc(sizeof(stack_t));
	if (fresh_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_list(top);
		return (NULL);
	}
	fresh_node->n = val;
	return (fresh_node);
}
