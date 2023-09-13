#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @string1: First string.
 * @string2: Second string.
 * @n: Number of bytes to concatenate.
 *
 * Return: Pointer to the allocated memory.
 * If malloc fails, returns NULL.
 */
char *string_nconcat(char *string1, char *string2, unsigned int n)
{
	char *result;
	unsigned int len1, len2, result_len, i;

	if (string1 == NULL)
		string1 = "";

	if (string2 == NULL)
		string2 = "";

	for (len1 = 0; string1[len1] != '\0'; len1++)
		;

	for (len2 = 0; string2[len2] != '\0'; len2++)
		;

	if (n > len2)
		n = len2;

	result_len = len1 + n;

	result = malloc(result_len + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < result_len; i++)
		if (i < len1)
			result[i] = string1[i];
		else
			result[i] = string2[i - len1];

	result[i] = '\0';

	return (result);
}

