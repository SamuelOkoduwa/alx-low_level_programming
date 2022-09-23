#include "main.h"

/**
 * string_toupper - changes all lowercase to upper
 * @n: pointer
 * Return: n
 */
char *string_topper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
}
