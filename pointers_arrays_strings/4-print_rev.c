#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	/* نحسب طول النص أولاً للوصول إلى نهايته */
	while (s[len] != '\0')
	{
		len++;
	}

	/* نطبع الحروف ابتداءً من الحرف الأخير وحتى الحرف الأول */
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');
}
