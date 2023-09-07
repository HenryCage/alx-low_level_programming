#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - prints the string copied
 * @str: given string
 * Return: the value
 */
char *_strdup(char *str)
{
	int i;
	char *j;
	int k = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
		k++;

	j = malloc(sizeof(char) * k + 1);

	if (j == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		j[i] = str[i];
	return (j);
}
