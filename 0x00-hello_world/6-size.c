#include <stdio.h>

/**
 * main - Prints quote
 *
 * Return: zero on success
 *
 */
int main(void)
{
	int Char_Size = 1;
	int Int_Size = 4;
	int Long_Size = 4;
	int LongLong_Size = 8;
	int Float_Size = 4;

	printf("Size of a char: %d byte(s)\n", Char_Size);
	printf("Size of an int: %d byte(s)\n", Int_Size);
	printf("Size of a long int: %d byte(s)\n", Long_Size);
	printf("Size of a long long int: %d byte(s)\n", LongLong_Size);
	printf("Size of a float: %d byte(s)\n", Float_Size);
	return (0);
}
