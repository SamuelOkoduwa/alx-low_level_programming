#include "main.h"

/**
 * set_string - Sets the value of a pointer to char
 * @s: to value to modify
 * @to: the value to assign
 *
 * Return: Always 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
