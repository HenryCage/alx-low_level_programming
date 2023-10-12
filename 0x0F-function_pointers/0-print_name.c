#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: the name
 * @f: the pointer to the function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
