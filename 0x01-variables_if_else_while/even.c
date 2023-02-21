/*#include <stdio.h>

 how do we print even numbers from 0-30

int main(void)
{
	int num = 1;

	for (num = 1; num <= 30; num += 2)
	{
		printf("%d\n", num);
	}
	return (0);
}
*/

#include <stdio.h>

// how do we print even numbers from 0-30

/*int main(void)
{
	int num = 2;

	for (num = 2; num <= 30; num++)
	{
		if (num % 2 == 0)
		{
			printf("%d", num);
			if (num == 30)
			{
				continue;
			}
	 
		putchar(',');
		putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
*/
#include <stdio.h>
int main(void)
{
	int num = 1;
	for( num = 1; num <= 30; num++)
	{
		if(num * 2)
		{
			printf("%d", num);
		}
	}
	return (0);
}

