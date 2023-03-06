#include "main.h"

/**
  * _memset - fills memory with a constant byte.
  * @s: string to check
  * @b: byte to use
  * @n: memory space
  * Return: returns pointer to string
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
