#include "main.h"
#include <stdio.h>
/**
 *_strstr - a function that compares two strings
 *@heystack: String 1
 *@needle: String 2
 *Return: searched strings.
 */
char *_strstr(char *heystack, char *needle)
{
	int i, j;

	int flag = 0;

	if ((heystack == NULL || needle == NULL))
		return (NULL);
	for (i = 0; heystack[i] != '\0'; i++)
	{
		if (heystack[i] == needle[0])
		{
			for (j = i; ; j++)
			{
				if (needle[j - i] == '\0')
				{
					flag = 1;
					break;
				}
				if (heystack[j] == needle[j - i])
					continue;
				else
					break;
			}
		}
		if (flag == 1)
			break;
	}
	if (flag)
		return (heystack + i);
	else
		return (NULL);
}
