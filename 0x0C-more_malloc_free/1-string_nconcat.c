#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * len - String length
 * @s: String variable
 *
 * Return: 0
 */
int len(char *s)
{
	int cnt = 0;

	while (s && s[cnt])
		cnt++;

	return (cnt);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 *
 * Return: a pointer to the allocated memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int lens1 = len(s1), lens2 = len(s2);
	unsigned int sum, i, k = 0;

	if (n >= lens2)
		sum = lens1 + lens2;
	else
		sum = lens1 + n;

	ar = malloc((sum + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < lens1; i++)
		ar[i] = s1[i];

	while (i < sum)
		ar[i++] = s2[k++];

	ar[i] = '\0';

	return (ar);
}
