#include "main.h"
/**
 * _memset - fill memory
 * @s: first parameter
 * @b: second parameter
 * @n: unsigned int
 * Return: returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}
