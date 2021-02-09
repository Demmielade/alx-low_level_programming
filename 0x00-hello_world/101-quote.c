#include <unistd.h>

/**
 * main - Prints quote
 *
 * Return: zero on success
 *
 */
int main(void)
{
	write(2, "and that iece of art is useful - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
