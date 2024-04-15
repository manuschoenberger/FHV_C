/*
 * Bestimmen des Maximums.c
 *
 *  Created on: 24.11.2022
 *      Author: Manuel Schönberger
 */

#include <stdio.h>
#include <stdlib.h>

#define LENGTH 5

int calcMaximum(int num) {
	int values[] = {3, 5, 10, 2, 1};
	int max = values[0];

	for (int i = 0; i <= num - 1; i += 1) {
		if (values[i] > max) {
			max = values[i];
		}
	}

	return max;
}

int main(int argc, char * argv[]) {
	printf("%d", calcMaximum(LENGTH));

	return 0;
}

