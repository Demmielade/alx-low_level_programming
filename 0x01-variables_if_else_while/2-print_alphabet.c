#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Prints all alphabets in lower case
 *
 * Return: 0 on success
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

