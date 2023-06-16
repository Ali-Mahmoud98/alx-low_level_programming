#include<stdio.h>
#include<unistd.h>
/*
*The <unistd.h> header in C provides access to the POSIX operating system API, which includes functions for handling processes, file system, and other system-related operations.
*
*Here are some of the functions provided by the <unistd.h> header:
*-int access(const char *filename, int mode): Check if the calling process has permission to access the specified file.
*-int chdir(const char *path): Change the current working directory to the specified path.
*-int close(int fd): Close the specified file descriptor.
*-size_t read(int fd, void *buf, size_t count): Read up to count bytes from the specified file descriptor into the specified buffer.
*-size_t write(int fd, const void *buf, size_t count) : Write up to count bytes from the specified buffer to the specified file descriptor.
*-int fork(): Create a new process by duplicating the calling process.
*-int execve(const char *filename, char *const argv[], char *const envp[]): Execute the specified executable file with the specified arguments and environment variables.
*- int exit(int status): Terminate the calling process with the specified status code.
*The <unistd.h> header is commonly used in C programs that need to interact with the operating system or perform system-related operations. By including this header, the program can use these functions to perform these tasks without having to write their own low-level code.
*/
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",59);
	return (1);
}
