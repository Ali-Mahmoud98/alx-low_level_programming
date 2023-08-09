#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

#define MAX_BUFFER_SIZE 1024
char *create_buf(char *file);
void close_fd(int fd);
/**
 * main - copy content of src file to dest file.
 * @argc: number of args.
 * @argv: array of strings
 * Return: 0 means success
 */
int main(int argc, char *argv[])
{
	int src, dest, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = create_buf(argv[2]);
	src = open(argv[1], O_RDONLY);
	r = read(src, buf, MAX_BUFFER_SIZE);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (src == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n",
					argv[1]);
			free(buf);
			exit(98);
		}
		w = write(dest, buf, r);
		if (w == -1 || dest == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n",
					argv[2]);
			free(buf);
			exit(99);
		}
		r = read(src, buf, MAX_BUFFER_SIZE);
		dest = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buf);
	close_fd(src);
	close_fd(dest);
}
/**
 * create_buf - allocate 1024 bytes for buffer
 * @file: file name
 * Return: pointer to character
 */
char *create_buf(char *file)
{
	char *buf = malloc(sizeof(char) * MAX_BUFFER_SIZE);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}
/**
 * close_fd - close file descriptor.
 * @fd: file descriptor
 */
void close_fd(int fd)
{
	int close_st = close(fd);

	if (close_st == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
