#include "main.h"

/**
 * _strlen - length of the character
 * @s: the character being checked
 * Return: the length
 */

int _strlen(char *s)
{
	int i;
	int j = 0;

	for (i = 0 ; s[i] != 0 ; i++)
		j++;
	return (j);
}
