#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new memory space containing s1 then s2
 */

char *str_concat(char *s1, char *s2)
{
	int x, y;
	char *str;

	x = y = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x])
		x++;
	while (s2[y])
		y++;
	str = (char *)malloc(sizeof(char) * (x + y));
	x = y = 0;
	if (str == NULL)
		return (NULL);
	while (s1[x])
	{
		str[x] = s1[x];
		x++;
	}
	while (s2[y])
	{
		str[x + y] = s2[y];
		y++;
	}
	str[x + y] = '\0';
	return (str);
}
