#include "main.h"
#include <stdlib.h>

/**
  * read_textfile - reads the contents of a file
  * @filename: point to the location of the file to be read
  * @letters: the number to be counted
  *
  * Return: returns the actual number of letters
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *tmp;
	ssize_t o, w, r;

	if (filename == NULL)
		return (0);

	tmp = malloc(sizeof(char) * letters);

	if (tmp == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, tmp, letters);
	w = write(STDOUT_FILENO, tmp, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(tmp);
		return (0);
	}

	free(tmp);
	close(o);

	return (w);
}
