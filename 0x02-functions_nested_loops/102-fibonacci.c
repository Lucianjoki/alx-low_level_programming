#include <stdio.h>

 /**
  * main - Entry point
  * @n: value of the fibonacci printed
  *
  * Return: Always 0 (Success)
  */

int main(void)

{
	unsigned long fib1 = 1, fib2 = 2, sum;

	printf("%lu, %lu", fib1, fib2);


	for (int count = 2; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf(", %lu", sum);

		fib1 = fib2;
		fib2 = sum;

	}
	printf("\n");
	return (0);
}
