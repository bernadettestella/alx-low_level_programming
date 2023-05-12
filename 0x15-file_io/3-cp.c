#include "main.h"

/**
  * check_arg - checks the number of arguments passed
  * @argc: the number of arguments
  *
  * Return: has no return value
  */

void check_arg(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

}

/**
  * check_file_from - checks that file_from exists
  * @checker: checks whether it is true or false
  * @file: the name of the file
  * @fd_from: file descriptor for file_from
  * @fd_to: file descriptor for file_to
  *
  * Return: has no return value
  */

void check_file_from(ssize_t checker, char *file, int fd_from, int fd_to)
{
	if (checker == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);

		exit(98);
	}

}

/**
  * check_file_to - checks that file_to is present and can be written into
  * @checker: checks if its true or false
  * @file: the name of the file_to
  * @fd_from: the file descriptore for file_from
  * @fd_to: the file descriptor for file_to
  *
  * Return: has no return value
  */

void check_file_to(ssize_t checker, char *file, int fd_from, int fd_to)
{
	if (checker == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);

		exit(99);
	}

}

/**
  * check_closure - checks that the file descriptors are well closed
  * @checker: checks if its true or false
  * @fd: the file descriptor value
  *
  * Return: has no return value
  */

void check_closure(int checker, int fd)
{
	if (checker == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

}

/**
  * main -  the function of the code
  * @argc: the number of arguments passed
  * @argv: a string of the arguments passed
  *
  * Return: returns a zero on success
  */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_from, close_to;
	ssize_t lenx, lent;
	char buffer[1024];
	mode_t permissions;

	check_arg(argc);

	fd_from = open(argv[1], O_RDONLY);
	check_file_from((ssize_t)fd_from, argv[1], -1, -1);

	permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	check_file_to((ssize_t)fd_to, argv[2], fd_from, -1);

	lenx = 1024;
	while (lenx == 1024)
	{
		lenx = read(fd_from, buffer, 1024);
		check_file_from(lenx, argv[1], fd_from, fd_to);
		lent = write(fd_to, buffer, lenx);
		if (lent != lenx)
			lent = -1;
		check_file_to(lent, argv[2], fd_from, fd_to);
	}

	close_to = close(fd_to);
	close_from = close(fd_from);
	check_closure(close_to, fd_to);
	check_closure(close_from, fd_from);

	return (0);
}

