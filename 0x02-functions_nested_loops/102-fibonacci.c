#include <stdio.h>

 /**
  * main - main function
  *
  * Description: function to print fibonacci sequence
  *
  * Return: Always 0 (Success)
  *
  */

int main(void)

{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	count = 0;
	while (count < 50)
	{

		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
		count++

	}
	return (0);
}
