#include "main.h"

/**
  * _strchr - locates a character in a string.
  * @s: string to be searched
  * @c: character to search for
  * Return: char c
  */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}

	if (*s == c)
	{
		return (s);

	}


	return (0);
}
