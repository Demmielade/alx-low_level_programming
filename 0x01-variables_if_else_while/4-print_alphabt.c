#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Prints alphabet in lowercase except q and e
 *
 * Return: 0 on success
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{		
		if (letter == 'q')
		{
			letter++;
		}
		else if (letter == 'e')
		{
			letter++;
		}
		else
		{
		putchar(letter);
			letter++;
		}
	}
	putchar('\n');
	return (0);
}
