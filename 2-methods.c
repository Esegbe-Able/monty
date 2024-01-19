#include "monty.h"
#include "extern.h"

/**
 *nop - it does nothing
 *
 */
void nop(void)
{
	;
}

/**
 *add - add function sums the top two
 *values on the stack
 *
 *Return: 0 if successful else -7
 */
int add(void)
{
	int i, j, sum;

	/* Not enough nodes to swap */
	if (top == NULL || top->next == NULL)
	{
		return (-7);
	}

	i = pop();
	j = pop();
	sum = i + j;
	push(sum);
	return (0);
}

/**
 *subtract - it subtracts the top two values
 *on the stack
 *
 *Return: 0 if successful else -8
 */
int subtract(void)
{
	int i, j, sub;

	/* Not enough nodes to swap */
	if (top == NULL || top->next == NULL)
	{
		return (-8);
	}

	i = pop();
	j = pop();
	sub = j - i;
	push(sub);
	return (0);
}

/**
 *_divide - _divide function divides the top two
 *values on the stack
 *
 *Return: 0 if successful else if stack is 
 < 2 return -9 else return -10
 */
int _divide(void)
{
	int i, j, div;

	/* Not enough nodes to swap */
	if (top == NULL || top->next == NULL)
	{
		return (-9);
	}

	i = pop();
	if (i == 0)
		return (-10);
	j = pop();
	div = j / i;
	push(div);
	return (0);
}

/**
 *mul - mul multiplies the top two values on the stack
 *
 *Return: 0 if successful else -11
 */
int mul(void)
{
	int i, j, mul;

	/* Not enough nodes to swap */
	if (top == NULL || top->next == NULL)
	{
		return (-11);
	}

	i = pop();
	j = pop();
	mul = j * i;
	push(mul);
	return (0);
}
