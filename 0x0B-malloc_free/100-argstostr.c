#include "main.h"

/**
 * argstostr - concatenates all arguments of your program
 * @ac: number of arguments
 * @av: pointer to array of arguments
 * Return: pointer to resulting string
 */

char *argstostr(int ac, char **av)
{
	int x, y, z, len;
	char *str;

	z = len = 0;
	for (x = 0; x < ac; x++)
		len += strlen(av[x]);
	str = (char *)malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		len = strlen(av[x]);
		for (y = 0; y < len; y++)
		{
			str[z] = av[x][y];
			z++;
		}
		str[z] = '\n';
		z++;
	}
	str[z] = '\0';
	return (str);
}
