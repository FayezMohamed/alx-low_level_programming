#include "main.h"
/**
 * read_textfile -  prints text fileto the POSIX standard output
 */

ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL) {
        exit(0);
    }

    int file_descriptor = open(filename, O_RDONLY);

    if (file_descriptor == -1) {
        exit(0);
    }

    char *buffer = malloc(letters);

    if (buffer == NULL) {
        close(file_descriptor);
        exit(0);
    }

    ssize_t bytes_read = read(file_descriptor, buffer, letters);

    if (bytes_read == -1) {
        free(buffer);
        close(file_descriptor);
        exit(0);
    }

    ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

    free(buffer);
    close(file_descriptor);

    if (bytes_written == -1 || bytes_written != bytes_read) {
        exit(0);
    }

    return bytes_written;
}

