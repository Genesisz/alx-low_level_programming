#include "main.h"

/**
 * _puts - write a function that prints a string
 * @str: string input
 *
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] !='\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
