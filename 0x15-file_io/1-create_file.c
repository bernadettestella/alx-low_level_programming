#include "main.h"

/**
  * create_file - creates a file
  * @filename: name of the file to be created
  * @text_content: string that writes into the file
  *
  * Return: returns 1 on success else -1
  */

int create_file(const char *filename, char *text_content)
{
	int o, wr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(o, text_content, length);

	if (o == -1 || wr == -1)
		return (-1);

	close(o);

	return (1);
}
