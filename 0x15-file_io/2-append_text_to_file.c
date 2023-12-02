#include "main.h"

int append_text_to_file(const char *filename, char *text_content) {
    int file_descriptor;
    ssize_t bytes_written;

    if (filename == NULL || text_content == NULL) return -1;

    file_descriptor = open(filename, O_WRONLY | O_APPEND);

    if (file_descriptor == -1) return -1;

    bytes_written = write(file_descriptor, text_content, strlen(text_content));

    if (bytes_written == -1) {
        close(file_descriptor);
        return -1;
    }

    close(file_descriptor);
    return 1;
}

