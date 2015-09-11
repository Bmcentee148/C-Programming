#include <stdio.h>

int main() {

	int currChar;

	while((currChar = getchar()) != EOF) {
		if(currChar == '\t')
			printf("\\t");
		else if(currChar == '\b')
			printf("\\b");
		else  if(currChar == '\\')
			printf("\\\\");
		else
			putchar(currChar);
	}
	return 0;
}