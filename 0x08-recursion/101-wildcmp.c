#include "main.h"

/**
 * wildcmp - compares 2 strings and checks if they are identical
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: 1 if true, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) != '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	return (0);
}
