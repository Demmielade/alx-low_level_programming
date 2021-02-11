#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description - Print variable "n" has +ve or -ve number
 *
 * Return - zero on success
*/
int main(void)
{
  /**
   *variable "n" has been declared
   */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
	  printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	  printf("%d is zero\n", n);
	}
	else
	{
	  printf("%d is negative\n", n);
	}
	
	return (0);
}
