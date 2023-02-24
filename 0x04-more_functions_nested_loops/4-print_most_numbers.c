#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - entry point
 *
 * Description: Prints the numbers
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		if (number != 2 && number != 4)
			
			putchar(number);
	}
	putchar('\n');
}
