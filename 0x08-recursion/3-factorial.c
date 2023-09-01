#include "main.h"
/**
 * factorial - gives the factorial of a given number
 * @n: the given number
 * Return: the result inputed
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
