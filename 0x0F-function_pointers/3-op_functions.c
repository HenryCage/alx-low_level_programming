#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: the first number
 * @b: the second number
 * Return: the sum of the two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -  returns the difference of a and b
 * @a: the first number
 * @b: the second number
 * Return: the subtracted value
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -  returns the product of a and b
 * @a: the first number
 * @b: the second number
 * Return: the multiplied value
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -  returns the result of the division of a by b
 * @a: the first number
 * @b: the second number
 * Return: the divided value
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a and b
 * @a: the first number
 * @b: the second one
 * Return: the value
 */
int op_mod(int a, int b)
{
	return (a % b);
}
