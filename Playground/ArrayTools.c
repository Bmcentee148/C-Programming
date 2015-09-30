#include <stdio.h>

#define M_LEN 5

/* Reverses the contents of an array */
void reverse_array(char s[], int len);

/* Determines the length of an array */
void get_len(char s[]);

/* Prints the contents of an array */
void print_array(char s[], int len);

int main() {
	char testchars[M_LEN];
	testchars[0] = 'a';
	testchars[1] = 'b';
	testchars[2] = 'c';
	testchars[3] = 'd';
	testchars[4] = 'e';
	print_array(testchars,M_LEN);
	reverse_array(testchars,M_LEN);
	print_array(testchars,M_LEN);

	return 0;
}

void reverse_array(char s[], int len) {
	int max_i = len - 1;
	char temp;
	for(int i = 0; i <= max_i/2; i++) {
		temp = s[i];
		s[i] = s[max_i - i];
		s[max_i - i] = temp;
	}
}

void print_array(char s[], int len) {
	for(int i = 0; i < len; i++)
		printf("%c ",s[i]);
	printf("\n");
}