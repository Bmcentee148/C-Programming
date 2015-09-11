#include <stdio.h>

/*	This will count the number of lines, words, and characters of the input.
	It serves as a bare bones version of the UNIX program wc */

#define IN 1
#define OUT 0

int main() {
	int nc = 0, nw = 0, nl = 0;
	int currChar, state;

	state = OUT;
	while((currChar = getchar()) != EOF) {
		++nc;
		if(currChar == '\n') {
			++nl;
		}
		if(currChar == ' ' || currChar == '\b' || currChar == '\t') {
			state = OUT;
		} 
		else if(state == OUT) {
			state = IN;
			++nw;
		}
	}

	printf("Number of characters: %d\n", nc);
	printf("Number of words: %d\n", nw);
	printf("Number of lines: %d\n", nl);
	return 0;
}