#include <stdio.h>

/* Shows the Farenheit-Celsius table
 * for fahr = 0, 20, ..., 300;
 * floating point number version */

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = -17;	/* minimum value in F grades in the temperatures table */
	upper = 17;		/* maximum value in F grades */
	step = 2;			/* interval between the two temperatures in contiguous F grades */

	celsius = lower;

	printf("%s\t\t%s\n", "Celsius", "Farenheit");

	while (celsius <= upper)
	{
		//celsius = 5.0/9.0 * (fahr-32);
		fahr = celsius/5.0*9.0+32;
		printf("%3.0f\t\t%6.2f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
