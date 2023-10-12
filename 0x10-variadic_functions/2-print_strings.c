#include "variadic_functions.h"

/**
 * print_strings - function that print strings
 * @separator: string printed between strings
 * @n: number of strings passed
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *strr;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		strr = va_arg(str, char *);

		if (strr)
			printf("%s", strr);
		else
			printf("(nil");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(str);
}
