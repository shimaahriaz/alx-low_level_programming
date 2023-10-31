#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#define BUFFER_SIZE 1024
/**
 * This program copies a file from one location to another.
 *Open the source file for reading.
 Read from the source file and write to the target file until the end of the
 *source file is reached.
 * It takes two command-line arguments: the source file path and the target file path. If the source file does not exist or the target file cannot be created or opened, the program prints an error message and exits. Otherwise, the program copies the contents of the source file to the target file, one buffer at a time.
 * Open the target file for writing, creating it if necessary and truncating it
 * to zero bytes.
 * Usage:
 *   cp <source_file_path> <target_file_path>
 */
int copy_file(const char *source, const char *target);
void handle_error(const char *msg, int code);
int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
return (97);
}
int result = copy_file(argv[1], argv[2);
return (result);
}
int copy_file(const char *source, const char *target)
{
int source_fd, target_fd;
char buffer[BUFFER_SIZE];
ssize_t bytes_read, bytes_written;
source_fd = open(source, O_RDONLY);
if (source_fd == -1)
{
handle_error("Can't read from file", 98);
}
target_fd = open(target, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (target_fd == -1)
{
handle_error("Can't write to file", 99);
}
while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(target_fd, buffer, bytes_read);
if (bytes_written == -1)
{
handle_error("Can't write to file", 99);
}
}
if (bytes_read == -1)
{
handle_error("Can't read from file", 98); }
if (close(source_fd) == -1 || close(target_fd) == -1)
{
handle_error("Can't close fd", 100);
}
return (0);
}
void handle_error(const char *msg, int code)
{
dprintf(STDERR_FILENO, "Error: %s\n", msg);
exit(code); }
