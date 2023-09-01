#include "main.h"
/**
 * _puts - puts the a new line
 * @str: the parameter
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
