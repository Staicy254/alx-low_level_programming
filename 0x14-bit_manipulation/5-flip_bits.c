#include "main.h"

/**
 * flip_bits - Counts the number of bits to change
 * to get from one number to another
 * @h: First number
 * @m: Second number
 *
 * Return: total of bits to change
 */

unsigned int flip_bits(unsigned long int h, unsigned long int m)
{
int q, count = 0;
unsigned long int current;
unsigned long int exclusive = h ^ m;

for (q = 63; q >= 0; q--)
{
current = exclusive >> q;
if (current & 1)
count++;
}

return (count);
}

