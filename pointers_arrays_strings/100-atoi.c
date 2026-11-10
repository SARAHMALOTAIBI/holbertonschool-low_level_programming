#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the integer converted from the string, or 0 if none
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int digit;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		digit = s[i] - '0';
		if (result < (-2147483647 / 10) || (result == -2147483647 / 10 && digit > 7))
		{
			if (sign == 1)
			{
				return (2147483647);
			}
			else
			{
				return (-2147483648);
			}
		}
		result = result * 10 - digit;
		i++;
	}

	if (sign < 0)
	{
		return (result);
	}

	if (result == -2147483648)
	{
		return (2147483647);
	}

	return (-result);
}
