#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - prints numbers from 00 to 99
 *
 * Return: 0 on success
 */
int main(void)
{
	int combo1, combo2:

	for (combo1 = '0'; combo1 = '9'; combo1++)
	{
		for (combo2 = '9'; combo2 = '0'; combo2++) 
		{

			putchar(combo1);
			putchar(combo2);
			if (combo1 + combo2 <= '9')
			{
				putchar(0);
				putchar(9);
			}
		}
	}
	putchar('\n');
	return (0);
}

