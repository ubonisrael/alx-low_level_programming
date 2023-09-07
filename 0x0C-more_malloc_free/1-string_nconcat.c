#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first number of bytes
 * Return: pointer to new memory containing concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, len1, len2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);
	for (x = 0; x < len1; x++)
		str[x] = s1[x];
	for (y = 0; y < (n > len2 ? len2 : n); y++)
		str[x + y] = s2[y];
	str[x + y] = '\0';
	return (str);
}
