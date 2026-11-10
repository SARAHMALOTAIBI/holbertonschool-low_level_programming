#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the integer converted, or 0 if none
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, res = 0, digit;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		digit = s[i] - '0';
		if (res < (-2147483647 / 10) ||
		    (res == -2147483647 / 10 && digit > 7))
		{
			return (sign == 1 ? 2147483647 : -2147483648);
		}
		res = res * 10 - digit;
		i++;
	}
	if (sign < 0)
		return (res);
	if (res == -2147483648)
		return (2147483647);
	return (-res);
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the integer converted, or 0 if none
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, res = 0, digit;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		digit = s[i] - '0';
		if (res < (-2147483647 / 10) ||
		    (res == -2147483647 / 10 && digit > 7))
		{
			return (sign == 1 ? 2147483647 : -2147483648);
		}
		res = res * 10 - digit;
		i++;
	}
	if (sign < 0)
		return (res);
	if (res == -2147483648)
		return (2147483647);
	return (-res);
}}





















































