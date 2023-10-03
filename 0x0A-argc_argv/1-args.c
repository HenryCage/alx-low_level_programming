#include <stdio.h>

/**
 * main - prints the number of arguments to a new line
 * @argc: the argument counter
 * @argv: the array of the counter
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
