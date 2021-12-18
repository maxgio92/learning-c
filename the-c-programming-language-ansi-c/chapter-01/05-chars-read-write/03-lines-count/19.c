#include <stdio.h>

#define MAX_SPACE 1

int main()
{
	int c, space;
	space = 0;

	while((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			++space;
			if (space <= MAX_SPACE)
				putchar(c);
		} 
		else
		{
			space = 0;
			putchar(c);
		}
	}
}
