#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Prints all single digit (0-9) nos of base 10 using 'putchar'
 *
 * Return: 0 on success
 */
int main(void)
{
	int num = 0;
	
	while (num <= '9')
	{
		putchar(num);
		num++;
		
	}
	putchar('\n');
	return (0);
}
	
