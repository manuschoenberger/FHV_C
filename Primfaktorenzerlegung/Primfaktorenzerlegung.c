/*
 * Primfaktorenzerlegung.c
 *
 *  Created on: 14.12.2022
 *      Author: Manuel Schönberger
 */

#include <stdio.h>

#define NUM 240

int primeFcalc(int num) {
	int prime = 2;

	while ((num % prime) != 0) {
		prime += 1;
	}

	return prime;
}

int main(int argv, char * argc[]) {
	int num = NUM;
	int temp = 0;

	printf("Number\tPrime\n\n%d\n",num);

	while (num > 1) {
		temp = primeFcalc(num);
		num /= primeFcalc(num);
		printf("%d\t|",num);
		printf("%d\n",temp);
	}

	return 0;
}
