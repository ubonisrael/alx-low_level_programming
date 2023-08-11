#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - checks the last digit of a random number
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int ltdt = n % 10;

	if (ltdt > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ltdt);
	else if (ltdt == 0)
		printf("Last digit of %d is %d and is 0\n", n, ltdt);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ltdt);

	return (0);
}
