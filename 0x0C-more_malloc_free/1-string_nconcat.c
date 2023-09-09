#include "main.h"
#include <stdlib.h>

/**
 * custom_string_nconcat - Concatenates two strings.
 * @str1: First string.
 * @str2: Second string.
 * @n: Number of bytes to concatenate.
 *
 * Return: Pointer to the allocated memory.
 * If malloc fails, returns NULL.
 */
char *custom_string_nconcat(char *str1, char *str2, unsigned int n)
{
	char *result;
	unsigned int len_str1, len_str2, len_result, i;

	if (str1 == NULL)
		str1 = "";

	if (str2 == NULL)
		str2 = "";

	for (len_str1 = 0; str1[len_str1] != '\0'; len_str1++)
		;

	for (len_str2 = 0; str2[len_str2] != '\0'; len_str2++)
		;

	if (n > len_str2)
		n = len_str2;

	len_result = len_str1 + n;

	result = malloc(len_result + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len_result; i++)
		if (i < len_str1)
			result[i] = str1[i];
		else
			result[i] = str2[i - len_str1];

	result[i] = '\0';

	return (result);
}

