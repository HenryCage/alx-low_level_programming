#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - checks for a character in the string
 * @s: puts it here
 * @accept: checks for it here
 * Return: return the character
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
