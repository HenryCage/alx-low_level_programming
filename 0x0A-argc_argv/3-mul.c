#include "main.h"
#include <stdio.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument counter
 * @argv: array that contains the argument
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
