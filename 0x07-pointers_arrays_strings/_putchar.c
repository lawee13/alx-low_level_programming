#include <unistd.h>
/**
 * _putchar - write the standard character stdout
 * @c: - char to be printed
 * Return: 1on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
