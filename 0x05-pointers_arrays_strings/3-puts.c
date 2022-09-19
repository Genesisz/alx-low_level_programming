#include "main.h"

/**
 *_puts - write a function that prints a string
 * @str: string input
 *
 */

void _puts(char *str)
{
	int i = 0;

	while(*(str + i) !='\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar('\n');
}
