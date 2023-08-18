#include "main.h"
/**
 * print_triangle - to print triangle
 * @size: parameter
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = size - i ; j < size ; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
