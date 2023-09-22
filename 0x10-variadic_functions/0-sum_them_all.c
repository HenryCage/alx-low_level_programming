#include "variadic_functions.h"

/**
 * sum_them_all - function to print the sum of all elements
 * @n: the number of pparameters
 * @...: dunno
 * Return: n==0 if 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, sum = 0;

	va_start(a, n);

	for (i = 0; i < n; i++)
		sum += va_arg(a, int);

	va_end(a);

	return (sum);
}
