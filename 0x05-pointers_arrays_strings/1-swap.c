#include "main.h"

/**
 *swap_int - It Swaps the value of a pointer with the other
 *@a: a pointer
 *@b: b pointer
 *
 *Return: none
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
