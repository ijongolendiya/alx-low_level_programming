#include "main.h"

/**
 * _strlen - returns the length
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)

{
	int i;

	i = 0;

	while (s[i] != '\0')

	{
		i++;

	}

	return (i);

}
