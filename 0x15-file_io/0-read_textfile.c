#include "main.h"
/**
 * read_textfile -  prints text fileto the POSIX standard output
 * @filename: text file
 * @letters: number of letters
 * 
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters) {
	int file_descriptor;
    	char *buffer;
    	ssize_t bytes_read;
    	ssize_t bytes_written;
    if (filename == NULL) {
        return 0;
    }

    file_descriptor = open(filename, O_RDONLY);

    if (file_descriptor == -1) {
        return 0;
    }

    buffer = malloc(letters);

    if (buffer == NULL) {
        close(file_descriptor);
        return 0;
    }

    bytes_read = read(file_descriptor, buffer, letters);

    if (bytes_read == -1) {
        free(buffer);
        close(file_descriptor);
        return 0;
    }

    bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

    free(buffer);
    close(file_descriptor);

    if (bytes_written == -1 || bytes_written != bytes_read) {
        return 0;
    }

    return bytes_written;
}
