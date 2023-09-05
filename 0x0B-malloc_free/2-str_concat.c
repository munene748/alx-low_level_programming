#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *holberton; /* Change the array name to holberton */
	int n, nm;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	n = nm = 0;

	while (s1[n] != '\0')
		n++;
	while (s2[nm] != '\0')
		nm++;

	holberton = malloc(sizeof(char) * (n + nm + 1));

	if (holberton == NULL)
		return (NULL);

	n = nm = 0;

	while (s1[n] != '\0')
	{
		holberton[n] = s1[n];
		n++;
	}

	while (s2[nm] != '\0')
	{
		holberton[n] = s2[nm];
		n++, nm++;
	}

	holberton[n] = '\0';
	return (holberton);
}

