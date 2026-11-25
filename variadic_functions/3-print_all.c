#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - prints a char from va_list
 * @ap: argument list
 */
static void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - prints an integer from va_list
 * @ap: argument list
 */
static void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints a float from va_list
 * @ap: argument list
 */
static void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_str - prints a string from va_list, or (nil) if NULL
 * @ap: argument list
 */
static void print_str(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything based on a format string
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	printer_t funcs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL}
	};
	unsigned int i = 0, j;
	char *sep = "";

	va_start(ap, format);
	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			j = 0;
			while (funcs[j].spec != '\0')
			{
				if (format[i] == funcs[j].spec)
				{
					printf("%s", sep);
					funcs[j].print(ap);
					sep = ", ";
				}
				j++;
			}
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
