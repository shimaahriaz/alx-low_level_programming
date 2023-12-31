#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask = 1;
if (index > 63)
return (-1);
mask <<= index;
if ((n & mask) == 0)
return (0);
else
return (1);
}
