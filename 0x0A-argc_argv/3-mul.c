#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the multiplication of two arguments.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if are less of 2 arguments otherwise 0.
 */
int main(int argc, char **argv)
{
	int m;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%i\n", m);
	}
	return (0);
}
