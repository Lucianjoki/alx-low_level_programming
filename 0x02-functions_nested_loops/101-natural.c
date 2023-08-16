#include <stdio.h>

/**
 * main - Print the first 52 fibonnaci
 * Return: 0
 */

int main(void)
{
	int sum = 0
	int i;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}

	printf("%d\n", sum);
	return (0);
}
