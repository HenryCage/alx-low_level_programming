#include "main.h"
#include <stddef.h>
/**
 * _strchr - to locate a character in the string
 * @s: return a pointer to this
 * @c: or to this one
 * Return: return s c or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
