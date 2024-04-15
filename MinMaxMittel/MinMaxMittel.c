/*
 * MinMaxMittel.c
 *
 *  Created on: 22.12.2022
 *      Author: Manuel Schönberger
 */

#include<stdio.h>

#define LEN 10
#define OK 0
#define ERR -1

int minMaxMittel(int * pMin, int * pMax, float * pSum, int array[]) {
	if (LEN <= 0) {
		return ERR;
	}
	*pMin = array[0];
	*pMax = array[0];

	for(int i = 0; i < LEN; i += 1){
		*pSum += array[i];
		if(array[i] < *pMin) {
			*pMin = array[i];
		}
		if(array[i] > *pMax) {
			*pMax = array[i];
		}
	}
	*pSum /= LEN;

	return OK;
}

int main(int agrv, char * argc[]) {
	int array[LEN] = {3,4,2,6,2,3,4,3,9,5};

	int min = 0;
	int max = 0;
	float sum = 0;

	minMaxMittel(&min,&max,&sum,array);
	printf("%d, %d, %0.2f",min,max,sum);

	return 0;
}
