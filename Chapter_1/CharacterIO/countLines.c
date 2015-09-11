#include <stdio.h>

/*	This will count the number of lines in the input by counting the 
	number of newline characters */

int main() {
	int currChar, numLines = 0;

	while((currChar = getchar()) != EOF) {
		if(currChar == '\n')
			++numLines;
	}
	printf("Number of lines: %d\n",numLines);

	return 0;
}