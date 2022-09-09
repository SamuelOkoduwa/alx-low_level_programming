#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Program that assign a random number to a variable n
 *
 * Return: Proceed
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

If (n > 0)
{
	printf("%x is positive\n", n);
}
else if (n == 0)
{
	printf("%x is zero\n", n);
} 
else 
{
	printf("%x is negative\n", n);
}
return (0);
}
