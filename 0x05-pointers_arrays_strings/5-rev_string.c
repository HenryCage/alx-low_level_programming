#include "main.h"

/**
 * rev_string - the function to reverse string
 * @s: the parameter
 */

void rev_string(char *s)
{
	int i;
	int j = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		j++;
	for (i = 0 ; i < j / 2 ; i++)
	{
		char x;

		x = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = x;
	}
}
