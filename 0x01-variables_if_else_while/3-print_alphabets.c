#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Print lowercase alphabet, then uppercase alphabet
 *
 * Return: 0 on success
 */
int main(void)
{
	char lower_case = 'a';
	char upper_case = 'A';

	while (lower_case <= 'z', upper_case <= 'Z')
	{
		putchar(lower_case);
		putchar(upper_case);
		lower_case++;
		upper_case++;
	}
	putchar('\n');
	return (0);
}
