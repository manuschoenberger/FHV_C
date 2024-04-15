/*
 * Kleinstes gemeinsames Vielfaches.c
 *
 *  Created on: 12.01.2023
 *      Author: Manuel Schönberger
 */

#include <stdio.h>

int gcd(int, int);

int lcm(int, int);

int main(int argc, char * argv[]) {
	int num1 = 54;
	int num2 = 54;

	if(num1 < 0) {
		num1 *= (-1);
	}

	if(num2 < 0) {
		num2 *= (-1);
	}

	printf("Das kgV von %d und %d ist %d!",num1, num2, lcm(num1,num2));

	return 0;
}

int gcd(int num1, int num2) {
	int temp = 0;

	while(num1 != num2) {
		if(num1 < num2) {
			temp = num1;
			num1 = num2;
			num2 = temp;
		}
		num1 -= num2;
	}

	return num1;
}

int lcm(int num1, int num2) {
	int ggT = gcd(num1,num2);
	int kgV = 0;

	kgV = (num1 * num2) / ggT;

	return kgV;
}
