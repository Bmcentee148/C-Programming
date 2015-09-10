/* Counts the number of characters in the input. 1st version */

#include <stdio.h>

int main() {

	long nc = 0;

	while(getchar() != EOF)
		nc++;
	printf("Number of characters: %ld\n",nc);

	return 0;
}