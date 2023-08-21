#include "main.h"
/**
 * swap_int - swaps the two values
 * @a: the first variable
 * @b: the second variable
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;

}
