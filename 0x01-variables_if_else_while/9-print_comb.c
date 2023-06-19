#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int w, a;

for (w = 49; w <= 56; w++)
{
for (a = 49; a <= 57; a++)
{
if (a > w)
{
putchar(w);
putchar(a);

if (w != 56 || a != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
