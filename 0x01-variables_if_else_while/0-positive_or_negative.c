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
	int l;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX /2;
	l = n % 10;


