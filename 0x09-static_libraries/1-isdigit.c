#include "main.h"

/**
 * _isdigit - is a digit
 * @c: is the parameter checked
 * Return: either 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
