#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - prints all possible combo of single-digits numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int combo = '0';

	while (combo < '9')
	{
		putchar(combo);
		if (combo < 9)
		{
			putchar(',');
			putchar(' ');
		}
		combo++;
	}
	putchar('\n');
	return (0);
}

