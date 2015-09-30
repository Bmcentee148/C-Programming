#include <stdio.h>

#define MAX_LEN 1000	/* maximum line length */

/* 	Used to copy the longest line for storage */
void copy(char to[], char from[]);

/* 	Used to retrieve the next line from input and get its length
	The length of the current line is returned and the line is recorded in s[]*/
int getLine(char s[], int maxlen);

int main() {

	return 0;
}

/*  Assumes we will not reach the end of the array since it should include
	a null character and terminates then. */
void copy(char to[], char from[]) {
	int i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}

/*  Must handle the case that we find a line that is greater than we allocated 
	storage space for */
int getLine(char s[], int maxlen) {
	int lineLen = 0;

	for(int i = 0; (i < maxlen - 1) && (c != EOF) && (c != '\n'); ++i){
		s[i] = c;
		c = getchar();
	}
}