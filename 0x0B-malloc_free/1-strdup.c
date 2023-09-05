#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string or NULL on failure.
 */
char *_strdup(char *str)
{
	char *nnn;
	unsigned int i, leng;

	i = 0;
	leng = 0;

	if (str == NULL)
		return (NULL);

	while (str[leng])
		leng++;

	nnn = malloc(sizeof(char) * (leng + 1));

	if (nnn == NULL)
		return (NULL);

	while ((nnn[i] = str[i]) != '\0')
		i++;

	return (nnn);
}

