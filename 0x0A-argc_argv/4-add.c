#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print the sum  of two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 for less of 2 arguments or nondigit numbers, 0 success
 */
int main(int argc, char **argv)
{
	int sum, i, j;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
