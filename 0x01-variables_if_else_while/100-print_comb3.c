#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int z, y, x;

for (z = 48; z < 58; z++)
{
for (y = 49; y < 58; y++)
{
for (x = 50; x < 58; x++)

putchar(z);
putchar(y);
putchar(x);

if (z != 55 || y != 56)
{
putchar(',');
}
}
}
putchar('\n');
return (0);
}
