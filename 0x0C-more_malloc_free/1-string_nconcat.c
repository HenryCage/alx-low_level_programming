#include "main.h"

/**
 * string_nconcat - function to concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes
 * Return: NULL on fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		a = malloc(sizeof(char) * (len1 + n + 1));
	else
		a = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!a)
		return (NULL);

	while (i < len1)
	{
		a[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		a[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		a[i++] = s2[j++];

	a[i] = '\0';

	return (a);
}
