/*#include "main.h"*/
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main body o the code
 * @argc: the argument counter
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int a, b, mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		mul = a * b;
		printf("%d\n", mul);
	}
	return (0);
}
