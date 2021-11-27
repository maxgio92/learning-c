#include <stdio.h>

/* Shows the Farenheit-Celsius table
 * for fahr = 0, 20, ..., 300;
 * floating point number version */

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	printf("%s\t%s\n", "Farenheit", "Celsius");

	for (fahr = 100; fahr >= 0; fahr -= 5)
	{
		printf("%3.0f\t\t%6.2f\n", fahr, (5.0/9.0)*(fahr-32));
	}
}
