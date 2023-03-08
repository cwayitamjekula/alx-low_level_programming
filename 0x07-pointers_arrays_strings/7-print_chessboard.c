#include "main.h"

/**
 * print_chessboard - print the chessboard
 * @a: 2d array of chars
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, n;

	i = 0;
	while (i < 8)
	{
		n = 0;
		while (n < 8)
		{
			_putchar (a[i][n]);
			n++;
		}
		_putchar ('\n');
		i++
	}

}
