#include <stdio.h>

/*	This will copy input to output but replace all occurrences of one or more
	whitespace characters with a single whitespace character */

int main() {
	int currChar;

	while((currChar = getchar()) != EOF) {
		if(currChar == ' ' || currChar == '\t') {
			putchar(' ');
			while((currChar = getchar()) == ' ' || currChar == '\t')
				;
			putchar(currChar);
		}
		else {
			putchar(currChar);
		}
	}
	return 0;
}