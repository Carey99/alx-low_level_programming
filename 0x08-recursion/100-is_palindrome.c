#include "main.h"
/**
* _strlen_recursion - returns the length of astring
* @s: String to determine its length
* Return: Length of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
/**
* _is_palindrome - calls is_palindrome
* @s: String being checked
* @i: Start of the string
* @j: end of string
* Return: 1 if palindrome else 0
*/
int _is_palindrome(char *s, int i, int j)
{
	if (i >= j)
	{
	return (1);
	}
	if (s[i] != s[j])
	{
	return (0);
	}
	return (_is_palindrome(s, i + 1, j - 1));
}
/**
* is_palindrome - Checks if a string is palindrome
* @s: String to be checked
* Return: 1 if s palindrome else 0
*/

int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s);
	return (_is_palindrome(s, 0, i - 1));
}
