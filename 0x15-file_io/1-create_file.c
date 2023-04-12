#include "main.h"

/**
  * create_file - creates a file
  * @filename: points to the file created
  * @text_content: the content of the file
  *
  * Return: returns an integer depending on the result
  */

int create_file(const char *filename, char *text_content)
{
	int o, w;
	int r = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (r = 0; text_content[r];)
			r++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, r);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
