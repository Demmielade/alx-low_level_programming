The#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - Prints out the last digit of a variable "n"
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d", n, (n % 10));

	if ((n % 10) > 5)
	{
		printf("and is greater than 5", (n % 10));
	}
	else if ((n % 10) == 0)
	{
		printf("and is 0", (n % 10));
	}
	else
	{
		printf("and is less than 6 and not o"' (n % 10));
	}
	return (0);
}