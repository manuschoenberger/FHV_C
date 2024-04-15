/*
 * Reihenentwicklung der Exponentialfunktion.c
 *
 *  Created on: 24.11.2022
 *      Author: Manuel Schönberger
 */

#include <stdio.h>
#include <stdlib.h>

#define varZ 3.512
#define LENGTH 1

int main(int argc, char * argv[]) {
	double z = varZ;
	int n = LENGTH;
	double zaehler = 1.0, nenner = 1.0, res = 1.0;


	for (int i = 1; i < n; i += 1) {
		zaehler *= z;
		nenner *= i;
		res += (zaehler / nenner);
	}

	printf("e^%0.5f = %0.5f", z, res);
	return 0;
}

