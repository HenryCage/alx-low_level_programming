#include "main.h"
/**
 * print_last_digit - prints last digit
 * @p: parameter to be checked
 * Return: returns values
 */

int print_last_digit(int p)
{
	int q;

	q = p % 10;
	if (q < 0)
		q = -q;
	_putchar(q + '0');
	return (q);
}
