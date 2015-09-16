#include <stdio.h>

/* 	This will count the frequency of the occurence of each basic character in 
	the given input */

#define NUM_CHARS 128

int main() {

	int currChar;
	int charFreq[NUM_CHARS];
	for(int i = 0; i < NUM_CHARS; i++)
		charFreq[i] = 0;

	while((currChar = getchar()) != EOF) {
		charFreq[currChar]++;
	}

	for(int i = 0; i < NUM_CHARS; i++) {
		printf("%c: %d\n",i,charFreq[i]);
	}
	return 0;
}