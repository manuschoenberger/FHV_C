#include <stdio.h>
#include <stdlib.h>

#define INDEX 8

int main(int argc, char * argv []) {
	int values[] = {3, 5, 7, 8, 1, -1, 4, 0};
	int num = INDEX - 1;
	float sum = 0;
	int min = values[0], max = values[0];

	for (int i = 0; i <= num; i += 1) {
		sum += values[i];
		if (values[i] < min) {
			min = values[i];
		}
		if (values[i] > max) {
			max = values[i];
		}
	}

	sum /= INDEX;

	printf("Arithmetisches Mittel:\t%0.2f\n", sum);

	printf("Minimum:\t%d\nMaximum:\t%d", min, max);

	return 0;
}
