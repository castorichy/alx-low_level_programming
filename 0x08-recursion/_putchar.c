#include <unistd.h>

/**
 * _putchar - write a character to c stdout
 * @c: the charcter to print
 *
 * Return: on success 1
 * 	On error, - -1 is returned, and error number is set apropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
