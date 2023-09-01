#include "main.h"
/**
 * _strlen_recursion - the length of the strength
 * @s: the length
 * Return: the value
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
