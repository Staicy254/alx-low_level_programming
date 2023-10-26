#include "main.h"

/**
 * binary_to_uint - Converts binary number to unsigned integer
 * @b: the string containing the binary number
 *
 * Return: the number after conversion
 */
unsigned int binary_to_uint(const char *b)
{
int w;
unsigned int dec_val = 0;

if (!b)
return (0);

for (w = 0; b[w]; w++)
{
if (b[w] < '0' || b[w] > '1')
return (0);
dec_val = 2 * dec_val + (b[w] - '0');
}

return (dec_val);
}

