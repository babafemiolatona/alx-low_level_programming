#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - copies the content of a file to another file
 *
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 on success, exit with code on failure
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	fd_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(file_from);
	exit(99);
	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		close(file_to);
		exit(99);
		if (bytes_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_from); /* close the source file */
		close(file_to); /* close the destination file */
		exit(98);
		if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		close(file_to);
		exit(100);
		if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
