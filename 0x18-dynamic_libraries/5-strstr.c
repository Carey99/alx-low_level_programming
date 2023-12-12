#include "main.h"

/**
* _strstr - Locates a substring
* @haystack: String where substring is found
* @needle: substring to be located
* Return: pointer to the beginning of substring
*/

char *_strstr(char *haystack, char *needle)
{
	char *substr;
	char *InHayStac;

	while (*haystack)
	{
	substr = needle;
	InHayStac = haystack;
	while (*InHayStac == *substr && InHayStac)
	{
	InHayStac++;
	substr++;
	}
	if (*substr == '\0')
	{
	return (haystack);
	}
	haystack++;
	}
	return (0);
}
