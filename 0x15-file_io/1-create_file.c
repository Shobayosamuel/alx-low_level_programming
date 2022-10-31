#include "main.h"
int create_file(const char *filename, char *text_content)
{
    int fd, letters, rw;
    if (!filename)
    {
        return (-1);
    }
    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fd == -1)
    {
        return (-1);
    }
    if (!text_content)
    {
        text_content = " ";
    }
    for (letters = 0; text_content[letters]; letters++)
    {
        ;
    }
    rw = write(fd, text_content, letters);
    if (rw == -1)
    {
        return (-1);
    }
    close(fd);
    return (1);
}