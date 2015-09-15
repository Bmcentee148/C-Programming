#include <stdio.h>

/* 	This will count the occurence of the number of digits, whitespace, and all
	"other" characters within the input */

int main() {
	int c, numDigit, numBlank, numOther;
	int digitFreq[10];

	numDigit = numBlank = numOther = 0;
	
	/* Initialize the arrays contents */
	for(int i = 0; i < 10; i++)
		digitFreq[i] = 0;

	while((c = getchar()) != EOF) {
		if(c >= '0' && c <= '9') {
			numDigit++;
			++digitFreq[c - '0'];
		}
		else if(c == '\n' || c == '\t' || c == ' ') {
			numBlank++;
		}
		else{
			numOther++;
		}
	}

	printf("Digits: ");
	for(int i = 0; i < 10; i++) {
		printf("%d ",digitFreq[i]);
	}
	printf("\nNumber of digits: %d\n", numDigit);
	printf("Number of white space: %d\n", numBlank);
	printf("Number of other: %d\n", numOther);

	return 0;
}