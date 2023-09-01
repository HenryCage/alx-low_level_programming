#include "main.h"
#include <stddef.h>
/**
 * _strstr - finding occurence
 * @haystack: finding it here
 * @needle: what ya fnding
 * Return: something if it's found or not
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0' ; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
			return (haystack);
	}
	return (NULL);
}
