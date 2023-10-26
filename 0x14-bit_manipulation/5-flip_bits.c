#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int w, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

for (w = 63; w >= 0; w--)
{
current = exclusive >> w;
if (current & 1)
count++;
}

return (count);
}

