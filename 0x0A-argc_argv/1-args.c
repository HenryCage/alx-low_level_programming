#include "main.h"
#include <stdio.h>
/**
 * main - the main code
 * @argc: argument counter
 * @argv: argument vector array
 * Return: always 0 for successful
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
