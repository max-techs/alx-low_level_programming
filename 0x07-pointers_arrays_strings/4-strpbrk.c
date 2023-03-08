#include "main.h"

/**
  * _strpbrk - searches a string for any of a set of bytes.
  * @s: string to search for
  * @accept: string to search
  * Return: pointer to occurence of s in accept
  *
  */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}

			j++;
		}

		s++;
	}
	return (0);

}
