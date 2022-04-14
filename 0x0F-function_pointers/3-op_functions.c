#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - function to addition
 * @a: first integer
 * @b: sencond integer
 * Return: int
 */

int op_add(int a, int b)
{
	int ret;

	ret = a + b;
	return (ret);
}

/**
 * op_sub - function to subtract
 * @a: first integer
 * @b: sencond integer
 * Return: int
 */

int op_sub(int a, int b)
{
	int ret;

	ret = a - b;
	return (ret);
}

/**
 * op_mul - function to multiply
 * @a: first integer
 * @b: sencond integer
 * Return: int
 */

int op_mul(int a, int b)
{
	int ret;

	ret = a * b;
	return (ret);
}

/**
 * op_div - function to divide
 * @a: first integer
 * @b: sencond integer
 * Return: int
 */

int op_div(int a, int b)
{
	int ret;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	ret = a / b;
	return (ret);
}

/**
 * op_mod - function to return modulus
 * @a: first integer
 * @b: sencond integer
 * Return: int
 */

int op_mod(int a, int b)
{
	int ret;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	ret = a % b;
	return (ret);
}
