/*
 * Zeigermanipulation.c
 *
 *  Created on: 12.01.2023
 *      Author: Manuel Schönberger
 */

#include <stdio.h>

int main(int argc, char * argv[]) {
//	1.
	int i = 1234;
	int k = 5678;

	printf("1.\ti:  %d\n\tk:  %d\n\n",i,k);

//	2.
	int *pI = &i;

	printf("2.\ti:  %d\n\tk:  %d\n\tpI: %i\n\n",i,k,*pI);

//	3.
	*pI = 2323;

	printf("3.\ti:  %d\n\tk:  %d\n\tpI: %i\n\n",i,k,*pI);

//	4.
	++*(pI);

	printf("4.\ti:  %d\n\tk:  %d\n\tpI: %i\n\n",i,k,*pI);

//	5.
	pI = &k;

	printf("5.\ti:  %d\n\tk:  %d\n\tpI: %i\n\n",i,k,*pI);

	return 0;
}
