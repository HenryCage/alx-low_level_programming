#include "3-calc.h"

/**
 * main - function to calculate simple operations
 * @argc: the argument counter
 * @argv: the array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n1, n2;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	printf("%d\n", op(n1, n2));
	return (0);
}
