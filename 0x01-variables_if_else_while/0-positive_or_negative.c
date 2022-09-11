#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print if the number is positive, zero, or negative
*
* Description: using the main function
* this program prints "Programming is positive, zero, or negative"
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));

	/* your code goes there */

	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%1d is positive\n", n);
	}
	else
		if (n < 0)
		{
			printf("%1d is negative\n", n);
		}
		else
		{
			printf("%1d is zero\n", n);
		}
	return (0);
}
