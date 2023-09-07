#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * str_concat - to concatente two strings
 * @s1: the first string
 * @s2: the second one
 * Return: the final results
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	char *j;
	int s1len = 0;
	int s2len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;

	j = malloc(sizeof(char) * (s1len + s2len) + 1);

	if (j == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		j[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		j[s1len + i] = s2[i];
	return (j);
}
