#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char tmp;

	/* حساب طول النص أولاً */
	while (s[len] != '\0')
	{
		len++;
	}

	/* تبديل الحروف من البداية والنهاية نحو المنتصف */
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}
}
