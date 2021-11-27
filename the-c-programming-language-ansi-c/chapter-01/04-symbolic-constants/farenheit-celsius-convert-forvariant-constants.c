#include <stdio.h>

/* Shows the Farenheit-Celsius table
 * for fahr = 0, 20, ..., 300;
 * floating point number version */

#define	LOWER	0
#define	UPPER	100
#define	STEP	5

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	printf("%s\t%s\n", "Farenheit", "Celsius");

	for (fahr = LOWER; fahr < UPPER; fahr += STEP)
	{
		printf("%3.0f\t\t%6.2f\n", fahr, (5.0/9.0)*(fahr-32));
	}
}
