/*
 * Naeherungsweise Berechnung der Quadratwurzel.c
 *
 *  Created on: 24.11.2022
 *      Author: Manuel Schönberger
 */

#include <stdio.h>
#include <stdlib.h>

#define NUM 10.0

double check(double varY, double temp) {
	double diff = varY - temp;

	if (diff < 0) {
		diff *= (-1);
	}

	return diff;
}

double calc(double varX) {
	double x = varX;
	double y = 0.0;
	double temp = 0.0;
	double eps = 0.001;

	y = x / 2;

	do {
		temp = y;
		y = 0.5 * (temp + (x / temp));

	} while ((check(y, temp)) > eps);

	return y;
}

int main(int argv, char * argc[]) {
	double res = 0.0;
	res = calc(NUM);

	printf("sqrt(%0.2f) = %0.5f", NUM, res);

	return 0;
}
