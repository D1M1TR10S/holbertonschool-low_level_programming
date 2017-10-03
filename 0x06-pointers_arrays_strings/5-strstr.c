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

	while ((haystack[i] != '\0') || (needle[n] != '\0'))
	{
		if (haystack[i] == needle[n])
		{
			return (needle);
			/*if (needle[n] == '\0')
				break;*/
			n++;
		}
		i++;
	}
	return (NULL);
}
