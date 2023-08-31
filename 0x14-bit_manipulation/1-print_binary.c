#include "main.h"

/**
 * print_binary -Prints the binary equivalent of a decimal number
 *
 * @h: number to be printed in binary
 */

void print_binary(unsigned long int h)
{
int q, count = 0;
unsigned long int current;

for (q = 63; q >= 0; q--)
{
current = h >> q;

if (current & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}

