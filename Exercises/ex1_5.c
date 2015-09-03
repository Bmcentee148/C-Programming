/*  This program will use the for loop to display the Fahrenheit to Celcius
	table from fahr = 300,280,...0 */

#include <stdio.h>

int main() {

	printf("%3s %6s\n","F","C");
	for(float fahr = 300; fahr >=0; fahr -= 20) {
		printf("%3.0f %6.1f\n",fahr, (5.0/9.0) * (fahr - 32.0));
	}
	return 0;
}

