#include <stdio.h>

/* This will count the number of characters of the input using a for loop
	which uses the null terminator to complete the empty body */

int main() {
	double nc;
	for(nc = 0; getchar() != EOF; ++nc)
		;
	printf("Number of characters: %.0f\n",nc);
	return 0;
}