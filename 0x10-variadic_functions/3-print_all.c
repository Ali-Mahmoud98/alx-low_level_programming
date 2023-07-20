#include "variadic_functions.h"
#include <stdio.h>
/**
  * print_all - function that prints anything.
  * @format: is a list of types of arguments passed to the function
  * c: char
  * i: integer
  * f: float
  * s: char * (if the string is NULL, print (nil) instead
  * any other char should be ignored
  */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *sep = "";
	char *str;
	int i = 0;

	va_start(ap, format);
	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ap, double));
					break;
				case 's':
					str = va_arg(ap, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(ap);
}
