#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int w;

for (w = 97; w < 123; w++)
{
if (w != 101 && w != 113)

{
putchar (w);
}
}
putchar ('\n');

return (0);
}
