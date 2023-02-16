#include <stdio.h>
#include <unistd.h>
/**
  * main - prints exactly a piece of art is useful
  *:x
  *Return: Always 0 means success
  */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
