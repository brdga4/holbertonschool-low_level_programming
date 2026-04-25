#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * error_exit - Prints error messages and exits with appropriate codes
 * @code: The exit code
 * @message: The format string for the error message
 * @arg: The string argument (filename)
 * @fd: The file descriptor (used for close errors)
 */
void error_exit(int code, const char *message, const char *arg, int fd)
{
	if (code == 97 || code == 98 || code == 99)
		dprintf(STDERR_FILENO, message, arg);
	else if (code == 100)
		dprintf(STDERR_FILENO, message, fd);

	exit(code);
}

/**
 * main - Copies the content of a file to another file
 * @argc: The number of arguments
 * @argv: The array of arguments
 * * Return: 0 on success, or exits with codes 97, 98, 99, 100 on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	/* Check correct number of arguments */
	if (argc != 3)
		error_exit(97, "Usage: cp %s %s\n", argv[0], 0);

	/* Open file_from for reading */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1], 0);

	/* Open file_to for writing, create if doesn't exist, truncate if it does */
	/* Permissions: rw-rw-r-- (0664) */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2], 0);

	/* Read from file_from and write to file_to in 1024-byte chunks */
	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			error_exit(99, "Error: Can't write to %s\n", argv[2], 0);
	}

	/* Check if read loop exited due to an error */
	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1], 0);

	/* Close file descriptors and check for errors */
	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", NULL, fd_from);

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", NULL, fd_to);

	return (0);
}
