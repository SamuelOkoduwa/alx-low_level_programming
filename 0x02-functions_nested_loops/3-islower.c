#include "main.h"
/**
 * _is lower - function to check for lowercase character
 * @c: is the int that will use the argument of the function 
 * Return: 0
 */
int _is lower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
