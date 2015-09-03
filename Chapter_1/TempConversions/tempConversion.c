#include <stdio.h>

/* print farenheit celcius table for 
	0, 20, ..., 300 */
int main() {
	float fahr, cel;
	int low, high, step;

	low = 0;	/* the lower limit of the temperature table */
	high = 300;	/* the upper limit of the temp table */
	step = 20;	/* step size */

	fahr = low;

	printf("%3s %6s\n", "F", "C"); /* table header */

	while(fahr <= high) {
		cel = (5.0 / 9) * (fahr - 32);
		printf("%3.0f %6.1f\n",fahr,cel);
		fahr += step;
	}

	return 0;
}