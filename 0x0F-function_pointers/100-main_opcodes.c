#include <stdlib.h>
#include <stdio.h>

/**
 * main: program that prints the opcodes of its own main function
 * @argc: argument counter
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int nbytes, i;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (i = 0; i < nbytes; i++)
	{
		if (i == nbytes - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
	}
	return (0);
}
