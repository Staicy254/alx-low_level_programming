#include "main.h"

/**
 * binary_to_uint - Converts binary number to unsigned int
 * @w: The strign that contains the binary number
 *
 * Return: Converted number
 */

unsigned int binary_to_uint(const char *w)
{
int q;
unsigned int dec_val = 0;

if (!w)
return (0);

for (q = 0; w[q]; q++)
{
if (w[q] < '0' || w[q] > '1')
return (0);
dec_val = 2 * dec_val + (w[q] - '0');
}

return (dec_val);
}

