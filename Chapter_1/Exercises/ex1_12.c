#include <stdio.h>

/* This will copy input to output but display only one word per line */

#define IN 1
#define OUT 0

int main() {

	int currChar;
	int state = OUT;
	while((currChar = getchar()) != EOF) {
		if(currChar == ' ' || currChar == '\t' || currChar == '\b') {
			state = OUT;
		}
		else if(state == OUT){
			putchar('\n');
			putchar(currChar);
			state = IN;
		}
		else {
			putchar(currChar);
		}
	}
	return 0;
}