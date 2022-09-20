#include "main.h"
#include <stdio.h>
/**
 * rev_string - Prints string in reverse order
 * @s: string input
 */
void rev_string(char *s)
{
	int i, cnt = 0;
	char *p, tmp;

	p = s;

	while (*p != '\0')
	{
		cnt++;
		p++;
	}

	for (i = 0; i < cnt - 1; i++)
	{
		tmp = s[i];
		s[i] = s[cnt - 1];
		s[cnt - 1] = tmp;
		cnt--;
	}
}
