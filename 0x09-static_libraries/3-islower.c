#include "main.h"
/**
 * _islower - checks for lower case
 * @c: the parameter to be checked
 * Return: 1 on success and 0 on failure
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
