#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the newly allocated space containing s1 and s2,
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		concat[i] = s1[i];
		i++;
	}

	j = 0;
	while (j <= len2)
	{
		concat[i] = s2[j];
		i++;
		j++;
	}

	return (concat);
}
