#include "main.h"

/**
 * _islower - check if character is lowercase
 * @c: is the character to be chacked
 * Return: 1 if character is in lowercase ,otherwise 0
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);

else
return (0);
}
