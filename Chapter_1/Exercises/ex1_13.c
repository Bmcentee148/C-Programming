#include <stdio.h>

/* 	This will count the frequency of words' length from the given input. It will
	use an array to store the frequency of a length corresponding to the array's
	index. It will only account for words up to a length of 15 characters. */

#define MAX_WORD_LENGTH 15
#define IN 1
#define OUT 0

int main() {
	int state, c, currWordLength = 0;
	int lenFreq[MAX_WORD_LENGTH];
	for(int i = 0; i < MAX_WORD_LENGTH; i++)
		lenFreq[i] = 0;
	state = OUT;

	while((c = getchar()) != EOF) {
		if(c == ' ' || c == '\n' || c == '\t' || c == '\b'){
			if(state == IN) {
				lenFreq[currWordLength]++;
				currWordLength = 0;
			 }
			 state = OUT;
		}
		else {
			state = IN;
			currWordLength++;
		}
	}
	if(currWordLength > 0)
		lenFreq[currWordLength]++;

	printf("Length\tFrequency\n");
	for(int i = 0; i < MAX_WORD_LENGTH; i++){
		printf("%2d: ",i);
		for(int j = 0; j < lenFreq[i]; j++) {
			printf("+");
		}
		printf("\n");
	}	
	return 0; /* normal exit */
	
}