#include "holberton.h"
/**
 * *_strstr - Finds a substring within a string
 * @haystack: Larger string where function is finding the substring
 * @needle: Substring being returned
 * Return: needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int n = 0;
	int s = 0;

	while (haystack[i] != '\0')
	{
		if ((haystack[i] == needle[n]) && n == 0)
			s = i;
		while ((haystack[i] == needle[n]) && (needle[n] != '\0'))
		{
			n++;
			i++;
		}
		if (needle[n] == '\0' && n > 0)
			return (haystack + s);
		i++;
	}
	return (NULL);
}
