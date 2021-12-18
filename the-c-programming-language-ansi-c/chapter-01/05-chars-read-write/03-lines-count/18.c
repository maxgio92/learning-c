#include <stdio.h>

int main()
{
	int c, spaces;

	while((c = getchar()) != EOF)
		if (c == ' ')
			++spaces;

	printf("%d\n", spaces);
}
