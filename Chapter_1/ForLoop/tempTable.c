/*  This program will use the for loop to display the Fahrenheit to Celcius
	table from fahr = 0,20,...300 */

#define LOWER 0
#define UPPER 300
#define STEP 20
#include <stdio.h>

int main() {

	printf("%3s %6s\n","F","C");
	for(float fahr = LOWER; fahr <= UPPER; fahr += STEP) {
		printf("%3.0f %6.1f\n",fahr, (5.0/9.0) * (fahr - 32.0));
	}
	return 0;
}

