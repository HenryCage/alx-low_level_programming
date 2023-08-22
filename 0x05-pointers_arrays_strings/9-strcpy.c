#include "main.h"

/**
 * _strcpy - copy the strings
 * @dest: return to
 * @src: copy from
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	return (dest);
}
