#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * standard output.
 * @filename: Name of the file to append. * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int n, res_write, length;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		n = open(filename, O_WRONLY | O_APPEND);
		if (n == -1)
			return (-1);
		length = 0;
		while (*(text_content + length) != '\0')
			length++;
		res_write = write(n, text_content, length);
		if (res_write == -1)
		{
			close(n);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(n);
	return (1);
}
