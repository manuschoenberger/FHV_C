/*
 * Summenbildung.c
 *
 *  Created on: 24.11.2022
 *      Author: Manuel Schönberger
 */

#include <stdio.h>
#include <stdlib.h>

#define LIMITLOW 5
#define LIMITHIGH 10

int sumUp(int upperLimit) {
	int sum = 0;

	for (int i = 0; i <= upperLimit; i += 1) {
		sum += i;
	}

	return sum;
}

int sumUpEven(int upperLimit) {
	int sum = 0;
	for (int i = 0; i <= upperLimit; i += 1) {
		if ((i % 2) == 0) {
			sum += i;
		}
	}

	return sum;
}

int sumUpLowerLimit(int lowerLimit, int upperLimit) {
	int sum = 0;

	for (int i = 0; i < lowerLimit; i += 1) {
		sum += i;
	}

	sum = sumUp(LIMITHIGH) - sum;

	return sum;
}

int main(int argc, char * argv[]) {

	printf("Summenbildung der Zahlen %d und %d:\n\n", LIMITLOW, LIMITHIGH);
	printf("Ohne unterer Grenze: \t\t\t\t%d\n", sumUp(LIMITHIGH));
	printf("Ohne unterer Grenze und alle geraden Zahlen: \t%d\n", sumUpEven(LIMITHIGH));
	printf("Mit Unter- und Obergrenze: \t\t\t%d", sumUpLowerLimit(LIMITLOW, LIMITHIGH));

	return 0;
}
