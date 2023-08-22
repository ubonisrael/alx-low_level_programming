#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string
 * Return: integer
 */

int _atoi(char *s)
{
	int x;
	int length;
	int num;
	int sign;

	num = 0;
	sign = 1;
	length = 0;
	for (x = 0; ; x++)
	{
		if (*(s + x))
			length++;
		else
			break;
	}

	for (x = 0; x < length; x++)
	{
		if (num == 0 && s[x] == 45)
			sign *= -1;
		if (s[x] > 47 && s[x] < 58)
			num = num * 10 + (s[x] - 48);
		if (num != 0 && (s[x] < 48 || s[x] > 57))
			break;
	}
	return (sign * num);
}
