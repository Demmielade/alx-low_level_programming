#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Prints the lower case alphabet in reverse
 *
 * Return: 0 on success
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
