#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char bt = 'a';

while (bt <= 'z')

{
if (bt == 'e' && bt == 'q')

{
putchar(bt);
}
bt++;
}

putchar('\n');

return (0);
}
