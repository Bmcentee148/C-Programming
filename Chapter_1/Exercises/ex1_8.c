#include <stdio.h>

/*	This will count the total number of blanks, newlines, and tabs from the
	input and displays the information to the user. */

int main() {

	int numNewLines = 0, numTabs = 0, numBlanks = 0;
	int currChar;

	while((currChar = getchar()) != EOF) {
		if(currChar == '\n') {
			numNewLines++;
		}
		else if(currChar == '\t') {
			numTabs++;
		}
		else if(currChar == ' ') {
			numBlanks++;
		}
	}

	printf("Number of blanks: %d\n", numBlanks); 
	printf("Number of new lines: %d\n", numNewLines);
	printf("Number of tabs: %d\n", numTabs);
	
	return 0;
}