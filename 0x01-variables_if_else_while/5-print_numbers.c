#include <stdio.h>

/**
 * main - Entry point
 *
<<<<<<< HEAD
 * Description - Prints all single digit (0-9) numberS of base 10 starting from 0

=======
 * Description - Prints all single digit(0-9) nos of base 10 starting from 0
>>>>>>> 9a5f6c1b66924e994eafc0003022b45b099f3776
 *
 * Return: 0 on success
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
