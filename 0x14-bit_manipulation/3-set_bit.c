#include "main.h"

/**
 * set_bit - sets the value of bit to a 1 at a given index
 * @n: pointer to number
 * @index: index to set to 1
 *
 * Return: 1 for success, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > 63)
		return (-1);

	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
