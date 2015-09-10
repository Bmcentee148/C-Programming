#include <stdio.h>

int main() {
	int c;
	while((c = getchar() != EOF)) {
		printf("%d\n",c);
	}
	printf("EOF has been reached. C has a value of %d\n",c);
	return 0;
}