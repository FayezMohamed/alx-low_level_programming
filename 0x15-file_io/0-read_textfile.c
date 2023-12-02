#include "main.h"
/**
 * read_textfile - reads a text file and prints to POSIX standard output
 * @filename: text file
 * @letters: number of letters to be printed
 *
 * Return: number of letters or 0 if NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor = open(filename, 0_RDONLY);
	if (filename == NULL)
	{
		return (0);
	}
    if (file_descriptor == -1) {
        return 0;
    }

    char *buffer = malloc(letters);

    if (buffer == NULL) {
        close(file_descriptor);
        return 0;
    }

    ssize_t bytes_read = read(file_descriptor, buffer, letters);

    if (bytes_read == -1) {
        free(buffer);
        close(file_descriptor);
        return 0;
    }

    ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

    free(buffer);
    close(file_descriptor);

    if (bytes_written == -1 || bytes_written != bytes_read) {
        return 0;
    }

    return bytes_written;
}
}
