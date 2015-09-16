#include <stdio.h>

int power(int num, int exp);

int main() {

	for(int i = 0; i < 10; i++) {
		printf("%d ",power(2,i));
	}

	return 0;
}

int power(int num, int exp) {
	int result = 1;
	for(int i = 0; i < exp; i++)
		result *= num;
	return result;
}