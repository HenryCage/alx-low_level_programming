#include "main.h"

/**
 * read_textfile - function that reads a txt file and print it to POSIX output
 * @filename: The name of the file
 * @letters: the number of letters it should read and print
 * Return: number of letters it could read and print and 0 if NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rd, wrt;
	char *chr;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	chr = malloc(sizeof(char) * (letters));
	if (!chr)
		return (0);

	rd = read(file, chr, letters);
	wrt = write(STDOUT_FILENO, chr, rd);

	close(file);

	free(chr);

	return (wrt);
}
