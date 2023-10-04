#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the nwe pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *string;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	string = malloc(sizeof(char) * (i + j + 1));

	if (string == NULL)
		return (NULL);

	i = j = 0;
	while (s1[i] != '\0')
	{
		string[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		string[j] = s2[j];
		j++;
	}
	/**string[i] != '\0';*/
	return (string);
}
