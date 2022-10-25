#include "main.h"

/**
 * _strlen - return the length of a string
 *
 *@s: char to check
 *Description: this will return the length of a string
 *Return: length
 */

int _strlen(char *s)

{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);

}
