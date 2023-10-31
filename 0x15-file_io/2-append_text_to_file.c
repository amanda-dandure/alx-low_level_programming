#include "main.h"

/**
 * append_text_to_file - Func that appends text at the end of a file
 * @filename: This is the name of the file to append content to
 * @text_content: This is the content to be appended to the file
 * Return: 1[success] or -1[fail]
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

		if (fd == -1)
			return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;
		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
