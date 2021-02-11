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
	  printf(n, "is positive %d\n");
	}
	else if (n == 0)
	{
	  printf(n, "is zero %d\n");
	}
	else
	{
	  printf(n, "is negative %d\n",);
	}
	return (0);
}
