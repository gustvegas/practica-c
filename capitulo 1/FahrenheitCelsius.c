#include <stdio.h>
#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */

main()
{
	/* print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300; floating-point version */

	float fahr, celsius;
	float lower, upper, step;
	int fahr2;
	int fahr3;

	lower = 0; /* lower limit of temperatuire scale */
	upper = 300; /* upper limit */
	step = 10; /* step size */
	fahr = lower;
	printf("Fahrenheit celsius\n");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	lower = -270; /* lower limit of temperatuire scale */
	upper = 270; /* upper limit */
	step = 10; /* step size */
	fahr = 0;
	celsius = lower;

	printf("Fahrenheit celsius\n");

	while (celsius <= upper) {
		fahr = (5.0/9.0) * (celsius-32.0);
		printf("%6.1f %3.0f\n", celsius, fahr);
		celsius = celsius + step;
	}

	printf("FOR Fahrenheit celsius\n");

	for (fahr2 = 0; fahr2 <= 300; fahr2 = fahr2 + 20)
		printf("%3d %6.1f\n", fahr2, (5.0/9.0)*(fahr2-32));	printf("FOR reves Fahrenheit celsius\n");

	for (fahr2 = 300; fahr2 >= 0; fahr2 = fahr2 - 20)
		printf("%3d %6.1f\n", fahr2, (5.0/9.0)*(fahr2-32));	printf("FOR reves con define Fahrenheit celsius\n");

	for (fahr3 = LOWER; fahr3 <= UPPER; fahr3 = fahr3 + STEP)
		printf("%3d %6.1f\n", fahr3, (5.0/9.0)*(fahr3-32));

	scanf("pause");
}
