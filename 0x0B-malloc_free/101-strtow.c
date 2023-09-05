#include "main.h"

/**
 * alloc_mem - allocates memory
 * @s: pointer to pointer to string
 * @x: position of string
 * @length: size of memory
 * Return: 1 if successfull, 0 otherwise
 */

int alloc_mem(char **s, int x, int length)
{
	s[x] = (char *)malloc(sizeof(char) * length);
	if (s[x] == NULL)
	{
		while (x >= 0)
		{
			free(s[x]);
			x--;
		}
		free(s);
		return (0);
	}
	else
		return (1);
}

/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer to array of strings
 */

char **strtow(char *str)
{
	int x = 0, y, z, temp, t_len = strlen(str), s_len;
	char **s;

	if (str == NULL || t_len < 1)
		return (NULL);
	s = (char **)malloc(sizeof(char *) * t_len);
	for (z = 0; z < t_len; z++)
	{
		if (!(str[z] > 32 && str[x] < 125))
			continue;
		if (str[z - 1] == 32 || z == 0)
		{
			y = 0;
			temp = z;
			s_len = 0;
			while (str[temp] && str[temp] != 32)
			{
				s_len++;
				temp++;
			}
			temp = alloc_mem(s, x, s_len);
			if (temp == 0)
				return (NULL);
		}
		s[x][y] = str[z];
		y++;
		if (y == s_len)
		{
			s[x][y] = '\0';
			x++;
		}
	}
	if (x == 0)
		return (NULL);
	x++;
	s[x] = NULL;
	for (x = 0; s[x] != NULL; x++)
	{
		for (y = 0; s[x][y] != '\0')
			t_len++;
		t_len++;
	}
	if (realloc(s, sizeof(char *) * (t_len + 1)) == NULL)
		return (NULL);
	return (s);
}
