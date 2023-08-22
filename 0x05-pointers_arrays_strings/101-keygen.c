#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

/**
 * main - generates random valid passwords for 101-crackme.
 * Return: 0
 */

int main(void)
{
	char possibleChars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTU\
VWXYZ1234567890!@#$%^&*()";
	char password[13];
	int x;
	int index;
	int passwordLength = 12;

	srand = ((unsigned int)time(NULL));

	for (x = 0; x < passwordLength; x++)
	{
		index = rand() % (strlen(possibleChars));
		password[x] = possibleChars[index];
	}
	password[passwordLength] = '\0';

	printf("%s", password);

	return (0);
}
