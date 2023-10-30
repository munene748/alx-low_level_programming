#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The content to add to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd, numletters, rwr;

    if (!filename)
        return (-1);

    fd = open(filename, O_WRONLY | O_APPEND);

    if (fd == -1)
        return (-1);

    if (text_content)
    {
        for (numletters = 0; text_content[numletters]; numletters++)
            ;

        rwr = write(fd, text_content, numletters);

        if (rwr == -1)
            return (-1);
    }

    close(fd);

    return (1);
}

