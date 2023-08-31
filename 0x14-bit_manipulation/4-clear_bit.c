#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @h: Pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 upon success, -1 upon failure
 */

int clear_bit(unsigned long int *h, unsigned int index)
{
if (index > 63)
return (-1);

*h = (~(1UL << index) & *h);
return (1);
}

