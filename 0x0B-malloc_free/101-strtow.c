#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * xlen - Length of string
 * @s: String
 *
 * Return: 0
 */
int xlen(char *s)
{
	int cnt = 0;

	while (*s != '\0')
	{
		cnt++;
		s++;
	}
	return (cnt);
}
/**
 * word_count - count of word in a string.
 * @s: String
 *
 * Return: 0
 */
int word_count(char *s)
{
	int cnt = 0, i = 0;
	int set_val = 0;

	while (*s != '\0')
	{
		if (s[i] == ' ')
		{
			set_val = 0;
		}
		else if (set_val == 0)
		{
			set_val = 1;
			cnt++;
		}
		s++;
	}
	return (cnt);
}
/**
 * strtow - a function that splits a string into words.
 * @str: string of words.
 *
 * Return: pointer to a new string.
 */
char **strtow(char *str)
{
	char **ar, *word;
	int count, i, j, w, len, cnt, state = 0, c = 0;

	if (str == NULL)
		return (NULL);
	len = xlen(str);
	count = word_count(str);
	ar = malloc((count + 1) * sizeof(char *));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
			state = 1;
		if (str[i] == ' ')
			state = 0;
		if (state == 1)
			cnt++;
		else
		{
			if (cnt > 0)
			{
				word = malloc((cnt + 1) * sizeof(char));
				if (word == NULL)
					return (NULL);
				w = 0;
				for (j = i - cnt; j < i; j++)
				{
					word[w] = str[j];
					w++;
				}
				word[cnt] = '\0';
				ar[c] = word;
				c++;
				cnt = 0;
			}
		}
	}
	ar[count + 1] = NULL;
	return (ar);
}
