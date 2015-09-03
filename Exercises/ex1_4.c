/*  This will display a Celcius Fahrenheit table for
	celcius = 0, 20,...,300 */

#include <stdio.h>

int main() {

	int lower = 0, upper = 300, step = 20;
	float celcius = lower;
	float fahr;

	printf("%3s %6s\n","C","F");
	while(celcius <= upper) {
		fahr = celcius * (9.0 / 5.0) + 32;
		printf("%3.0f %6.1f\n",celcius,fahr); 
		celcius += step;
	}

	return 0;
}