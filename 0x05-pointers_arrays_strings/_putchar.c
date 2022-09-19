#include <unistd.h>

/**
 * _putchar - writes character c to student
 * @c: the character to print
 *
 * Return: On success
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)

	return (write(1, &c, 1));
