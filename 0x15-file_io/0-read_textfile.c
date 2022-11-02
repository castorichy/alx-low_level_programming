#include "main.h"

/**
 * read_textfile - reads text file and outputs it to std out
 * @filename: name of the file
 * @letters: number of letters to be printed
 *
 * Return: number of latters printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t wfd, rfd;
	char *str;

	if (!filename)
		return (0);
	
	/*creating a file*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	
	/* reading and sending file contents to std out*/
	str = malloc(sizeof(char) * letters);
	if (!str)
	{
		free(str);
		return (0);
	}

	rfd = read(fd, str, letters);
	close(fd);
	if (rfd == -1)
		return (0);

	/*Writing into the file*/
	wfd = write(STDOUT_FILENO, str, letters);
	free(str);
	if (wfd == -1)
		return (0);
	/*dprintf(rfd, "%s", str);*/
	/*closing the file*/

	if (rfd != wfd)
	   return (0);
	return (wfd);

}