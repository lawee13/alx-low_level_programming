#include "variadic_functions.h"
/**
 * print_strings - prints strings passed to the function separated by separators
 * @separator: a string that is use to separate strings
 * @n: number of unnamed parameters
 * Return: always o
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			str == "(nill)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

