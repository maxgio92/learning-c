#include <stdio.h>
#include <unistd.h>

int main()
{
	//int c;
	unsigned char c;
	while ((c = getchar()) != EOF)
	{
		printf("%x", c);
	}
}
