#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using the main function
 * this program prints "Programming is like building a multilingual puzzle
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %ld byte(s)\n", (long unsigned)sizeof(d));
	printf("Size of an int: %ld byte(s)\n", (long unsigned)sizeof(a));
	printf("Size of a long int: %ld byte(s)\n", (long unsigned)sizeof(b));
	printf("Size of a long long int: %ld byte(s)\n", (long unsigned)sizeof(c));
	printf("Size of a float: %ld byte(s)\n", (long unsigned)sizeof(f));
	return (0);
}
