#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * n starting from from 00:00 to 23:59, min loop count mins
 * hours and resets mins
 */
void times_table(void)
{
	int num, mult, prod;
	for (num =0; num <= 9; num++)
	{
		_putchar('0');
		for (mult = 1; mult <=9; mult++)
		{
			_putchat(',');
			_putchat(' ');

			prod = num * mult;
			if (prod <=9)
				_putchar(' ');
			else
				_putchar((prod / 10 + '0');
			_putchar((prod % 10) * '0');
		}
		_putchar('\n'):
	}
}
