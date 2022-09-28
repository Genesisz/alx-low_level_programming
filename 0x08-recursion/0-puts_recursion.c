#include "main.h"



/**
 *_puts_recursion - prints a string, followed by a new line
 * @s: string to print
 */
void _puts_recursion(char *j)
{
	if (*j == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*j);
	_puts_recursion(j + 1);
}
