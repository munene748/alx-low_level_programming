#include <stdlib.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string.
 * @s: The string to evaluate.
 *
 * Return: The number of words.
 */
int count_words(char *s)
{
	int flag, count, in_word;

	flag = 0;
	count = 0;
	in_word = 0;

	while (*s)
	{
		if (*s == ' ')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		s++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: Pointer to an array of strings (Success) or NULL (Error).
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, start, end;

	while (*(str + len))
		len++;
	words = count_words(str);

	if (words == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (k)
			{
				end = i - 1;
				tmp = (char *)malloc(sizeof(char) * (k + 1));
				if (tmp == NULL)
				{
					for (k = 0; k < i; k++)
						free(matrix[k]);
					free(matrix);
					return (NULL);
				}
				for (k = start; k <= end; k++)
					tmp[k - start] = str[k];
				tmp[k - start] = '\0';
				matrix[k] = tmp;
				k = 0;
			}
		}
		else if (k == 0)
		{
			start = i;
			k++;
		}
		else
			k++;
	}

	matrix[words] = NULL;
	return (matrix);
}

