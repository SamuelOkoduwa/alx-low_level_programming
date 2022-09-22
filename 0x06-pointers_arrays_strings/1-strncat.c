#include"main.h"

/**
 * _strcat - concatnates two strings
 * @dest: copy to
 * @src: copy from
 * @n: numbers of chars to be copied
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';

	return (dest);
}
