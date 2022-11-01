#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters read and printed.
 *
 * Return: on Success (numbers of letters printed).
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rbytes, bytesr;
	char *buf;

	if (!filename)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
	{
		return (0);
	}
	rbytes = read(fd, buf, letters);
	bytesr = write(STDOUT_FILENO, buf, rbytes);
	close(fd);
	free(buf);

	return (bytesr);
}
