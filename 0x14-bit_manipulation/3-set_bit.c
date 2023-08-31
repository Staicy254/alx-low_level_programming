#include "main.h"

/**
 * set_bit - Sets a bit at a given index to 1
 * @h: Pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 upon success, -1 upon failure
 */

int set_bit(unsigned long int *h, unsigned int index)
{
if (index > 63)
return (-1);

*h = ((1UL << index) | *h);
return (1);
}

