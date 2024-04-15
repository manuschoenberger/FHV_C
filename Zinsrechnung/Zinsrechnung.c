#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
	float cap = 1000;
	float interest = 5;
	int period = 10;

	printf("Jahr\tKapital\n-------------------\n");

	for (int i = 1; i <= period; i += 1) {
		cap += cap * (interest / 100);
		printf("%d\t%0.2f EUR\n", i, cap);
	}

	return 0;
}
