#include <stdlib.h>
#include "main.h"

/**
 * count_word - Helper function to count the number of words in a string.
 * @s: The string to evaluate.
 *
 * Return: The number of words.
 */
int count_word(char *s)
{
	int flag, n, m;

	flag = 0;
	m = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			m++;
		}
	}

	return (m);
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
	int i, k = 0, len = 0, words, n = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (n)
			{
				end = i - 1;
				tmp = (char *)malloc(sizeof(char) * (n + 1));
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
				n = 0;
			}
		}
		else if (n == 0)
		{
			start = i;
			n++;
		}
		else
			n++;
	}

	matrix[words] = NULL;
	return (matrix);
}

