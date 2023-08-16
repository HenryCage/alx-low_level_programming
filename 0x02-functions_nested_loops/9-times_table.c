#include "main.h"
#include <stdio.h>

/**
 * times_table - multiplication table
 */
void times_table(void)
{
	int i, j, x;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			x = i * j;
			if (j == 0)
				printf("%d, ", x);
			else
			{
				printf("%2d", x);
				if (j != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
