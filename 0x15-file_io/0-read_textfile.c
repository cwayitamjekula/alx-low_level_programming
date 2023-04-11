#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int n;
	ssize_t size1, numLetters;
	char *ans;

	if (!filename)
		return (0);

	n = open(filename, O_RDONLY);

	if (n == -1)
		return (0);

	ans = malloc(sizeof(char) * (letters));
	if (!ans)
		return (0);

	size1 = read(n, ans, letters);
	numLetters = write(STDOUT_FILENO, ans, size1);

	close(n);

	free(ans);

	return (numLetters);
}
