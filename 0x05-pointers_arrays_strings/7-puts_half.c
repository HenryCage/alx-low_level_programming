#include "main.h"
/**
 * puts_half - prints half of the characters
 * @str: parameter
 */
void puts_half(char *str)
{
	int i;
	int n;
	int j = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		j++;
	n = (j - 1) / 2;
	for (i = n + 1 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
