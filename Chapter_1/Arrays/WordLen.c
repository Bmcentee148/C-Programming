#include <stdio.h>

#define OUT 0
#define IN 1
#define MAX_LEN 15

/* Returns 1 if current char is from word and 0 otherwise */
int inWord(char c);

int main() {
	int status = OUT;	
	int currChar;
	int wordLenFreq[MAX_LEN];	
	int currLen = 0;

	for(int i = 0; i < MAX_LEN; i++) {
		wordLenFreq[i] = 0;
	}

	while( (currChar = getchar()) != EOF) {
		if(inWord(currChar) == OUT){
			if(status == IN){
				/* Just coming out of word */
				if(currLen <= MAX_LEN)
					wordLenFreq[currLen - 1]++;
				currLen = 0;
			}
				status = OUT;
		}
		else {
			/* We are inside a word */
			status = IN;
			currLen++;
		}
	}
	/* Check if reached EOF while still inside a word and if so record length */
	if(currLen > 0) 
		wordLenFreq[currLen - 1]++;
	

	printf("Len Freq\n");
	for(int i = 0; i < MAX_LEN; i++) {
		printf("%2d: %d\n", (i + 1), wordLenFreq[i]);
	}

	return 0;
}

int inWord(char c) {
	int status = IN;
	if(c == ' ' || c == '\n' || c == '\t' || c == '\b')
		status = OUT;
	return status;
}