#include <stdio.h>

/* Shows the Farenheit-Celsius table
 * for fahr = 0, 20, ..., 300;
 * floating point number version */

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* minimum value in F grades in the temperatures table */
	upper = 100;	/* maximum value in F grades */
	step = 5;	/* interval between the two temperatures in contiguous F grades */

	fahr = lower;

	printf("%s\t%s\n", "Farenheit", "Celsius");

	while (fahr <= upper)
	{
		celsius = 5.0/9.0 * (fahr-32);
		printf("%3.0f\t\t%6.2f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
