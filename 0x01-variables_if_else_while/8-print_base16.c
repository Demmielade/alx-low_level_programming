#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Print all base 16 numbers in lower case
 *
 * Return: 0 on success
 */
int main(void)
{
	int hex_num = '0';

	while (hex_num <= '9')
	{
		putchar(hex_num);
		hex_num++;
	}

	int hex_num  = 'a';

	while (hex_num <= 'f')
	{
		putchar(hex_num);
		hex_num++;
	}
	putchar('\n');
	return (0);
}
