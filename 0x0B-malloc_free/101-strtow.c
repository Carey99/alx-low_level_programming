#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * word_count - Counts the no of words in str
 * @str: name of str
 * Return: The number of words
 */

int word_count(char *s)
{
	int c = 0;
	int ws = 1;

	while (*s)
	{
	if (*s == ' ')
	{
	ws = 1;
	}
	else if (ws == 1)
	{
	ws = 0;
	c++;
	}
	s++;
	}

	return (c);
}

/**
 * strtow - Splits a string
 * @str: Nam of string
 * Return: A pointer to an array of string
 */

char **strtow(char *str)
{
	char **words;
	int c, length;
	char *token;
	int num_words;
	int i;

	num_words = i = c = length = 0;
	if (str == NULL || *str == 0)
	{
	return (NULL);
	}

	num_words = word_count(str);

	if (num_words == 0)
	{
	return (NULL);
	}
	words = malloc((num_words + 1) * sizeof(char *));

	if (words == 0)
	{
	return (NULL);
	}

	for (; *str != '\0' &&  i < num_words;)
	{
	if (*str == ' ')
	{
	str++;
	}
	else
	{
	token = str;
	for (; *str != ' ' && *str != '\0';)
	{
	length++;
	str++;
	}
	words[i] = malloc((length + 1) * sizeof(char));
	if (words[i] == 0)
	{
	free(words);
	return (NULL);
	}
	while (*token != ' ' && *token != '\0')
	{
	words[i][c] = *token;
	token++;
	c++;
	}
	words[i][c] = '\0';
	i++;
	c = 0;
	length = 0;
	str++;
	}
	}
	return (words);
}
