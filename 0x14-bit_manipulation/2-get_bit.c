#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @h: number to search
 * @index: index of bit
 *
 * Return: Value of bit
 */

int get_bit(unsigned long int h, unsigned int index)
{
int bit_val;

if (index > 63)
return (-1);

bit_val = (h >> index) & 1;

return (bit_val);
}

