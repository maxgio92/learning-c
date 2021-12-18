#include <stdio.h>

int main()
{
	int c;

	while ((c = getchar()) != EOF)
	{
		switch(c) {
			/* backspace character */
			case 8:
				putchar('\\');
				putchar('b');
				break;
			/* tab character */
			case 9:
				putchar('\\');
				putchar('t');
				break;
			/* backslash character */
			case 92:
				putchar('\\');
				putchar('\\');
				break;
			default:
				putchar(c);
		}
	}
}
